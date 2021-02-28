/*
 * MCU_FPGA_com.c
 *
 *  Created on: Feb 18, 2021
 *      Author: chicken
 */

/* Includes ------------------------------------------------------------------*/
#include "MCU_FPGA_com.h"

SPI_HandleTypeDef hspi1;
uint8_t  byte_receive;
uint8_t  NB_trames = 0;
uint8_t  NB_trames_max = 0;
uint8_t* tab_trames;

s_rec_flux rf;
s_rec_bus rb;

void get_struct(s_rec_flux* rf_2, s_rec_bus* rb_2)
{
	rf_2 = &rf;
	rb_2 = &rb;
}

void Read_SPI(uint8_t* Rx_SPI)
{
	if (byte_receive == 1)
	{
		if(NB_trames == 0)
		{
			NB_trames += 1;
			NB_trames_max = Rx_SPI[0];
			tab_trames = (uint8_t*)malloc(NB_trames_max*sizeof(uint8_t));
		}else
		{
			if(NB_trames != 0)
			{
				tab_trames[NB_trames] = Rx_SPI[0];
				NB_trames += 1;
			}
		}
		if(NB_trames == NB_trames_max)
		{
			NB_trames = 0;
			//allocation_trame(tab_trames, &rf, &rb);
			allocation_trame(tab_trames);
		}
		byte_receive = 0;
	}
}


void allocation_trame(uint8_t* tab_trames)
{
	if((tab_trames[1]== 2) && (tab_trames[2]== 3))//Analyse DVI
	{
		rf.width = (tab_trames[3] << 8) + tab_trames[4];
		rf.height = (tab_trames[5] << 8) + tab_trames[6];
		rf.Vsync = (tab_trames[7] << 8) + tab_trames[8];
		rf.Hsync = (tab_trames[9] << 8) + tab_trames[10];
		rf.blankingV = (tab_trames[11] << 8) + tab_trames[12];
		rf.blankingH = (tab_trames[13] << 8) + tab_trames[14];
		rf.data_dispo_DVI = 1;
	}
	if((tab_trames[1]== 2) && (tab_trames[2]== 1))//Analyse SDI
	{
		rf.vidformat = tab_trames[3];
		rf.frameformat = tab_trames[4];
		rf.blankingH = (tab_trames[5] << 8) + tab_trames[6];
		rf.blankingV = (tab_trames[7] << 8) + tab_trames[8];
		rf.data_dispo_SDI = 1;
	}
	if((tab_trames[1]== 1) && (tab_trames[2]== 1))//Réception BUS ID_Sys et ID_Cmd pas défini, 3 et 2 choisi par défaut
	{
		//Il manque le type de bus
		//un param data_dispo aussi ?
		rb.adresse = tab_trames[4];
		rb.taillemot = tab_trames[5];
		rb.operateurbaud = tab_trames[6];
		rb.facteurbaud = tab_trames[7];
		rb.motbinaire = tab_trames[8]; //créer un tableau int *motbiniare dans la struct pour pouvoir stocker plusieur bytes ???
	}
	free(tab_trames);
}

/*void allocation_trame(uint8_t* tab_trames, s_rec_flux* rf, s_rec_bus* rb)
{
	if((tab_trames[1]== 2) && (tab_trames[2]== 3))//Analyse DVI
	{
		rf->width = (tab_trames[3] << 8) + tab_trames[4];
		rf->height = (tab_trames[5] << 8) + tab_trames[6];
		rf->Vsync = (tab_trames[7] << 8) + tab_trames[8];
		rf->Hsync = (tab_trames[9] << 8) + tab_trames[10];
		rf->blankingV = (tab_trames[11] << 8) + tab_trames[12];
		rf->blankingH = (tab_trames[13] << 8) + tab_trames[14];
		rf->data_dispo_DVI = 1;
	}
	if((tab_trames[1]== 2) && (tab_trames[2]== 1))//Analyse SDI
	{
		rf->vidformat = tab_trames[3];
		rf->frameformat = tab_trames[4];
		rf->blankingH = (tab_trames[5] << 8) + tab_trames[6];
		rf->blankingV = (tab_trames[7] << 8) + tab_trames[8];
		rf->data_dispo_SDI = 1;
	}
	if((tab_trames[1]== 1) && (tab_trames[2]== 1))//Réception BUS ID_Sys et ID_Cmd pas défini, 3 et 2 choisi par défaut
	{
		//Il manque le type de bus
		//un param data_dispo aussi ?
		rb->adresse = tab_trames[4];
		rb->taillemot = tab_trames[5];
		rb->operateurbaud = tab_trames[6];
		rb->facteurbaud = tab_trames[7];
		rb->motbinaire = tab_trames[8]; //créer un tableau int *motbiniare dans la struct pour pouvoir stocker plusieur bytes ???
	}
	free(tab_trames);
}*/

void Send_SPI(uint8_t* Tx)
{
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_4, GPIO_PIN_RESET);
	HAL_SPI_Transmit (&hspi1, Tx, 1, 100);  // write data to register
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_4, GPIO_PIN_SET);
	HAL_Delay(100);
}

void Envoie_Bus_com(s_gen_bus* gb)
{
	uint8_t Tx[1];

	if(gb->commencer == 1)//trames prêteent à être envoyées
	{
		Tx[0] = gb->octet;
		Send_SPI(Tx);

		Tx[0] = 3;//ID_Sys pas défini !!! 3 choisi par défaut
		Send_SPI(Tx);

		Tx[0] = 1; //ID_cmd pas défini !!! 1 choisi par défaut
		Send_SPI(Tx);

		Tx[0] = gb->protocole;
		Send_SPI(Tx);

		if(gb->protocole == 2)//protocole I2C envoie de l'adresse
		{
			Tx[0] = gb->adresse;
			Send_SPI(Tx);
		}

		Tx[0] = gb->taillemot;
		Send_SPI(Tx);

		Tx[0] = gb->operateur;
		Send_SPI(Tx);

		Tx[0] = gb->facteurbaud;
		Send_SPI(Tx);

		Tx[0] = gb->motbinaire;
		Send_SPI(Tx);

		gb->commencer = 0; //remise à 0 <=> trames envoyées
	}
}

void Envoie_DVI(s_gen_flux* gf)
{
	uint8_t Tx[1];

	if(gf->commencer == 1)//trames prêteent à être envoyées
	{
		Tx[0] = 22;//nombre d'octets
		Send_SPI(Tx);

		Tx[0] = 1;//ID_Sys
		Send_SPI(Tx);

		Tx[0] = 1; //ID_cmd
		Send_SPI(Tx);

		Tx[0] = gf->hlength; //hlenght sur 2 bytes, ici les 8 premiers bits
		Send_SPI(Tx);

		Tx[0] = ((gf->hlength)>>8); //hlenght sur 2 bytes, ici les 8 derneirs bits
		Send_SPI(Tx);

		Tx[0] = gf->width; //width sur 2 bytes, ici les 8 premiers bits
		Send_SPI(Tx);

		Tx[0] = ((gf->width)>>8); //width sur 2 bytes, ici les 8 derneirs bits
		Send_SPI(Tx);

		Tx[0] = gf->hfp;
		Send_SPI(Tx);

		Tx[0] = gf->hsyncpulse;
		Send_SPI(Tx);

		Tx[0] = gf->hbp; //hbp sur 2 bytes, ici les 8 premiers bits
		Send_SPI(Tx);

		Tx[0] = ((gf->hbp)>>8); //hbp sur 2 bytes, ici les 8 derneirs bits
		Send_SPI(Tx);

		Tx[0] = gf->hpolsync;
		Send_SPI(Tx);

		Tx[0] = gf->vlength; //vlength sur 2 bytes, ici les 8 premiers bits
		Send_SPI(Tx);

		Tx[0] = ((gf->vlength)>>8); //vlength sur 2 bytes, ici les 8 derneirs bits
		Send_SPI(Tx);

		Tx[0] = gf->height; //vlength sur 2 bytes, ici les 8 premiers bits
		Send_SPI(Tx);

		Tx[0] = ((gf->height)>>8); //vlength sur 2 bytes, ici les 8 derneirs bits
		Send_SPI(Tx);

		Tx[0] = gf->vfp;
		Send_SPI(Tx);

		Tx[0] = gf->vsyncpulse;
		Send_SPI(Tx);

		Tx[0] = gf->vbp;
		Send_SPI(Tx);

		Tx[0] = gf->vpolsync;
		Send_SPI(Tx);

		Tx[0] = gf->pclock;
		Send_SPI(Tx);

		Tx[0] = gf->mire;
		Send_SPI(Tx);

		gf->commencer = 0; //remise à 0 <=> trames envoyées
	}
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
	uint8_t  Rx_SPI[1];
	HAL_SPI_Receive(&hspi1, Rx_SPI, 1, 100);
	byte_receive = 1;
	Read_SPI(Rx_SPI);
}



