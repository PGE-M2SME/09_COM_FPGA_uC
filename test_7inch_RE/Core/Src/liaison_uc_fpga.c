/*
 * liaison_uc_fpga.c
 *
 *  Created on: 15 mars 2021
 *      Author: manoa
 */

/* Includes ------------------------------------------------------------------*/
//#include "pcstm32.h"
#include "main.h"
#include "stdlib.h"
#include "pcstm32.h"

/* Variables ----------------------------------------------------------------*/

SPI_HandleTypeDef hspi1;
uint8_t  byte_receive;
uint8_t  NB_trames = 0;
uint8_t  NB_trames_max = 0;
uint8_t* tab_trames;

/* PARAMETRES POUR LA GENERATION DE FLUX*/
extern int IHM_G_ResolH;
extern int IHM_G_ResolV;
extern int IHM_G_mire;
extern int IHM_G_standard;
extern int IHM_G_hfp;
extern int IHM_G_vfp;
extern int IHM_G_hbp;
extern int IHM_G_vbp;
extern int IHM_G_hlength;
extern int IHM_G_vlength;
extern int IHM_G_hsyncpulse;
extern int IHM_G_vsyncpulse;
extern int IHM_G_hpolsync;
extern int IHM_G_vpolsync;
extern int IHM_G_pclock;
extern int IHM_G_fluxcommencer;

/* PARAMETRES POUR LA GENERATION DU BUS*/
extern int IHM_G_protocole;
extern int IHM_G_freq;
extern int IHM_G_octet;
extern int IHM_G_motbinaire;
extern int IHM_G_taillemot;
extern int IHM_G_idcmd;
extern int IHM_G_operateur;
extern int IHM_G_facteurbaud;
extern int IHM_G_adresse;
extern int IHM_G_pins;
extern int IHM_G_buscommencer;

/* PARAMETRES POUR LA RECEPTION DU BUS*/
extern int IHM_R_taillebus;
extern int IHM_R_taillemot;
extern int IHM_R_adresse;
extern int IHM_R_operateurbaud;
extern int IHM_R_facteurbaud;
extern int IHM_R_motbinaire;
extern int IHM_R_commencer;

/* PARAMETRES POUR LA RECEPTION DU FLUX*/
extern int IHM_R_ResolH;
extern int IHM_R_ResolV;
extern int IHM_R_Hsync;
extern int IHM_R_Vsync;
extern int IHM_R_blankingH;
extern int IHM_R_blankingV;
extern int IHM_R_frameformat;
extern int IHM_R_vidformat;
extern int IHM_R_data_dispo_SDI;
extern int IHM_R_data_dispo_DVI;

/* Fonctions ----------------------------------------------------------------*/

void allocation_trame(uint8_t* tab_trames)
{
	if((tab_trames[1]== 2) && (tab_trames[2]== 3))//Analyse DVI
	{
		 IHM_R_ResolV = (tab_trames[3] << 8) + tab_trames[4];//rf.width
		 IHM_R_ResolH = (tab_trames[5] << 8) + tab_trames[6];//rf.height
		 IHM_R_Vsync = (tab_trames[7] << 8) + tab_trames[8];//rf.Vsync
		 IHM_R_Hsync = (tab_trames[9] << 8) + tab_trames[10];//rf.Hsync
		 IHM_R_blankingV = (tab_trames[11] << 8) + tab_trames[12];//rf.blankingV
		 IHM_R_blankingH = (tab_trames[13] << 8) + tab_trames[14];//rf.blankingH
		 IHM_R_data_dispo_DVI = 1;//rf.data_dispo_DVI
	}
	if((tab_trames[1]== 2) && (tab_trames[2]== 1))//Analyse SDI
	{
		IHM_R_vidformat = tab_trames[3];//rf.frameformat
		IHM_R_frameformat = tab_trames[4];//rf.frameformat
		IHM_R_blankingH = (tab_trames[5] << 8) + tab_trames[6];//rf.blankingH
		IHM_R_blankingV = (tab_trames[7] << 8) + tab_trames[8];//rf.blankingV
		IHM_R_data_dispo_SDI = 1;//rf.data_dispo_SDI
	}
	if((tab_trames[1]== 1) && (tab_trames[2]== 1))//Réception BUS ID_Sys et ID_Cmd pas défini, 3 et 2 choisi par défaut
	{
		IHM_R_taillebus = tab_trames[3];
		IHM_R_adresse = tab_trames[4];//rb.adresse
		IHM_R_taillemot = tab_trames[5];//rb.taillemot
		IHM_R_operateurbaud = tab_trames[6];//rb.operateurbaud
		IHM_R_facteurbaud = tab_trames[7];//rb.facteurbaud
		IHM_R_motbinaire = tab_trames[8]; //rb.motbinaire
		IHM_R_commencer = 1;
	}
	free(tab_trames);
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
			allocation_trame(tab_trames);
		}
		byte_receive = 0;
	}
}

void Send_SPI(uint8_t* Tx)
{
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_7, GPIO_PIN_RESET);
	HAL_SPI_Transmit (&hspi1, Tx, 1, 100);  // write data to register
	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_7, GPIO_PIN_SET);
	HAL_Delay(100);
}

void Envoie_Bus_com()
{
	uint8_t Tx[1];

	//if(gb->commencer == 1)//trames prêtent à être envoyées
	//{
		Tx[0] = IHM_G_octet;
		Send_SPI(Tx);

		Tx[0] = 3;//ID_Sys pas défini !!! 3 choisi par défaut
		Send_SPI(Tx);

		Tx[0] = 1; //ID_cmd pas défini !!! 1 choisi par défaut
		Send_SPI(Tx);

		Tx[0] = IHM_G_protocole;
		Send_SPI(Tx);

		if(IHM_G_protocole == 2)//protocole I2C envoie de l'adresse
		{
			Tx[0] =IHM_G_adresse;
			Send_SPI(Tx);
		}

		Tx[0] = IHM_G_taillemot;
		Send_SPI(Tx);

		Tx[0] = IHM_G_operateur;
		Send_SPI(Tx);

		Tx[0] = IHM_G_facteurbaud;
		Send_SPI(Tx);

		Tx[0] = IHM_G_motbinaire;
		Send_SPI(Tx);

		//gb->commencer = 0; //remise à 0 <=> trames envoyées
	//}
}

void Envoie_DVI()
{
	uint8_t Tx[1];

	//if(gf->commencer == 1)//trames prêteent à être envoyées
	//{
		Tx[0] = 22;//nombre d'octets
		Send_SPI(Tx);

		Tx[0] = 1;//ID_Sys
		Send_SPI(Tx);

		Tx[0] = 1; //ID_cmd
		Send_SPI(Tx);

		Tx[0] =  IHM_G_hlength; //hlenght sur 2 bytes, ici les 8 premiers bits
		Send_SPI(Tx);

		Tx[0] = ((IHM_G_hlength)>>8); //hlenght sur 2 bytes, ici les 8 derneirs bits
		Send_SPI(Tx);

		Tx[0] = IHM_G_vlength; //width sur 2 bytes, ici les 8 premiers bits
		Send_SPI(Tx);

		Tx[0] = ((IHM_G_vlength)>>8); //width sur 2 bytes, ici les 8 derneirs bits
		Send_SPI(Tx);

		Tx[0] = IHM_G_hfp;
		Send_SPI(Tx);

		Tx[0] = IHM_G_hsyncpulse;
		Send_SPI(Tx);

		Tx[0] =IHM_G_hbp; //hbp sur 2 bytes, ici les 8 premiers bits
		Send_SPI(Tx);

		Tx[0] = ((IHM_G_hbp)>>8); //hbp sur 2 bytes, ici les 8 derneirs bits
		Send_SPI(Tx);

		Tx[0] =IHM_G_hpolsync;
		Send_SPI(Tx);

		Tx[0] = IHM_G_hlength; //vlength sur 2 bytes, ici les 8 premiers bits
		Send_SPI(Tx);

		Tx[0] = ((IHM_G_hlength)>>8); //vlength sur 2 bytes, ici les 8 derneirs bits
		Send_SPI(Tx);

		Tx[0] = IHM_G_vlength; //vlength sur 2 bytes, ici les 8 premiers bits
		Send_SPI(Tx);

		Tx[0] = ((IHM_G_vlength)>>8); //vlength sur 2 bytes, ici les 8 derneirs bits
		Send_SPI(Tx);

		Tx[0] = IHM_G_vfp;
		Send_SPI(Tx);

		Tx[0] = IHM_G_vsyncpulse;
		Send_SPI(Tx);

		Tx[0] = IHM_G_vbp;
		Send_SPI(Tx);

		Tx[0] = IHM_G_vpolsync;
		Send_SPI(Tx);

		Tx[0] = IHM_G_pclock;
		Send_SPI(Tx);

		Tx[0] = IHM_G_mire;
		Send_SPI(Tx);

		//gf->commencer = 0; //remise à 0 <=> trames envoyées
	//}
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
	if (HAL_GPIO_ReadPin(GPIOD,  GPIO_PIN_11) == 0)
	{
		uint8_t  Rx_SPI[1];
		HAL_SPI_Receive(&hspi1, Rx_SPI, 1, 100);
		byte_receive = 1;
		Read_SPI(Rx_SPI);
	}
}
