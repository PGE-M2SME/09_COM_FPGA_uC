/*
 * pcstm32.c
 *
 *  Created on: 7 févr. 2021
 *      Author: Manoah
 */
/* Includes ------------------------------------------------------------------*/
#include "pcstm32.h"

/* Defines -------------------------------------------------------------------*/
#define erreur() envoiePCSTM("\nErreur\n",  strlen("\nErreur\n")); return;
#define GENERATION_FLUX_CMD 1
#define GENERATION_BUS_CMD 2
#define	RECEPTION_BUS_CMD 3
#define RECEPTION_FLUX_CMD 4
#define N_MIRES 10
#define N_STANDARDS 2
#define N_COMMENCE 1
#define	N_PROTOCOLE 3
/* Privates Variables --------------------------------------------------------*/
extern uint8_t buffer_verif[140];

/* Codes ---------------------------------------------------------------------*/
void s_gen_flux_config(s_gen_flux* gf)
{   help();
	uint8_t test[20], dummy[2];
    sscanf((char *) buffer_verif, "%s", (char *) test);

    if(memcmp(test, "genFlux", strlen("genFlux")) == 0)
    {
        char *p = strstr((char *) buffer_verif, "-r");
        if(p) {
            sscanf(p, "%s %d %s %d", dummy, &gf->width, dummy, &gf->height);
            if((gf->width==0) || (gf->height==0)) {
            	erreur();
            }
        }

        p = strstr((char *) buffer_verif, "-m");
        if(p) {
            sscanf(p, "%s %d", dummy, &(gf->mire));
            if((gf->mire == 0) || (gf->mire > N_MIRES)) {
            	erreur();
            }
        }

        p = strstr((char *) buffer_verif, "-s");
        if(p) {
            sscanf(p, "%s %d", dummy, &(gf->standard));
            if((gf->standard==0) || (gf->standard > N_STANDARDS)) {
            	erreur();
            }
        }

        p = strstr((char *) buffer_verif, "-f");
        if(p) {
            sscanf(p, "%s %d %s %d", dummy, &gf->hfp, dummy, &gf->vfp);
            if((gf->hfp==0) || (gf->vfp==0)) {
            	erreur();
            }
        }
        p = strstr((char *) buffer_verif, "-b");
        if(p) {
            sscanf(p, "%s %d %s %d", dummy, &gf->hbp, dummy, &gf->vbp);
            if((gf->hbp==0) || (gf->vbp==0)) {
            	erreur();
            }
        }
        p = strstr((char *) buffer_verif, "-l");
        if(p) {
            sscanf(p, "%s %d %s %d", dummy, &gf->hlength, dummy, &gf->vlength);
            if((gf->hlength==0) || (gf->vlength==0)) {
            	erreur();
            }
        }
        p = strstr((char *) buffer_verif, "-a");
        if(p) {
            sscanf(p, "%s %d %s %d", dummy, &gf->hsyncpulse, dummy, &gf->vsyncpulse);
            if((gf->hsyncpulse==0) || (gf->vsyncpulse==0)) {
            	erreur();
            }
        }
        p = strstr((char *) buffer_verif, "-d");
        if(p) {
            sscanf(p, "%s %d %s %d", dummy, &gf->hpolsync, dummy, &gf->vpolsync);
            if((gf->hpolsync==0) || (gf->vpolsync==0)) {
            	erreur();
            }
        }
        p = strstr((char *) buffer_verif, "-p");
        if(p) {
            sscanf(p, "%s %d", dummy, &gf->pclock);
            if(gf->pclock==0) {
            	erreur();
            }
        }

        p = strstr((char *) buffer_verif, "-c");
        if(p) {
            sscanf(p, "%s %d", dummy, &(gf->commencer));
            if(gf->commencer > N_COMMENCE) {
            	erreur();
            }
        }

        confirmationCMD(GENERATION_FLUX_CMD, (void*) gf);
    }


}

void s_gen_bus_config(s_gen_bus* gb)
{
    uint8_t test[20], dummy[2];
    sscanf((char *) buffer_verif, "%s", (char *) test);

    if(memcmp(test, "genBus", strlen("genBus")) == 0)
    {
        char *p = strstr((char *) buffer_verif, "-p");
        if(p) {
            sscanf(p, "%s %d", dummy, &gb->protocole);
            if((gb->protocole==0)|| (gb->protocole > N_PROTOCOLE)) {
            	erreur();
            }
        }

        p = strstr((char *) buffer_verif, "-f");
        if(p) {
            sscanf(p, "%s %d", dummy, &(gb->freq));
            if(gb->freq == 0) {
            	erreur();
            }
        }

        p = strstr((char *) buffer_verif, "-o");
        if(p) {
            sscanf(p, "%s %d", dummy, &(gb->octet));
            if(gb->octet==0) {
            	erreur();
            }
        }

        p = strstr((char *) buffer_verif, "-m");
        if(p) {
            sscanf(p, "%s %d", dummy, &(gb->motbinaire));
            if(gb->motbinaire==0) {
            	erreur();
            }
        }

        p = strstr((char *) buffer_verif, "-i");
        if(p) {
            sscanf(p, "%s %d", dummy, &(gb->taillemot));
            if(gb->taillemot == 0) {
            	erreur();
            }
        }

        p = strstr((char *) buffer_verif, "-e");
        if(p) {
            sscanf(p, "%s %d", dummy, &(gb->idcmd));
            if(gb->idcmd==0) {
            	erreur();
            }
        }

        p = strstr((char *) buffer_verif, "-t");
        if(p) {
            sscanf(p, "%s %d", dummy, &(gb->operateur));
            if(gb->operateur==0) {
            	erreur();
            }
        }

        p = strstr((char *) buffer_verif, "-u");
        if(p) {
            sscanf(p, "%s %d", dummy, &(gb->facteurbaud));
            if(gb->facteurbaud==0) {
            	erreur();
            }
        }

        p = strstr((char *) buffer_verif, "-a");
        if(p) {
            sscanf(p, "%s %d", dummy, &(gb->adresse));
            if(gb->adresse==0) {
            	erreur();
            }
        }

        p = strstr((char *) buffer_verif, "-c");
        if(p) {
            sscanf(p, "%s %d", dummy, &(gb->commencer));
            if(gb->commencer > N_COMMENCE) {
            	erreur();
            }
        }

        p = strstr((char *) buffer_verif, "-b");
        if(p) {
            sscanf(p, "%s %d", dummy, &(gb->pins));
            if(gb->pins==0) {
            	erreur();
            }
        }

        confirmationCMD(GENERATION_BUS_CMD, (void*) gb);
    }


}

void s_rec_bus_config(s_rec_bus* rb)
{
		uint8_t dr[8];
		sscanf((char *) buffer_verif, "%s", (char *) dr);

		if(memcmp(dr, "recBus", strlen("recBus")) == 0)
		{
			confirmationCMD(RECEPTION_BUS_CMD, (void*) rb);
			//ajouter la variable vous indiquant de modifier les champs des structures attendues

		}
}

void s_rec_flux_config(s_rec_flux* rf)
{
		uint8_t dfl[8];
		sscanf((char *) buffer_verif, "%s", (char *) dfl);

		if(memcmp(dfl, "recFlux", strlen("recFlux")) == 0)
		{
			confirmationCMD(RECEPTION_FLUX_CMD, (void*) rf);
			//ajouter la variable vous indiquant de modifier les champs des structures attendues
		}
}

void help(void)
{
    uint8_t h[20];
    sscanf((char *) buffer_verif, "%s", (char *) h);

    if(memcmp(h, "help", strlen("help")) == 0)
    {
    	uint8_t *help = "\nHELP \n";
   		envoiePCSTM(help, strlen(help));
    	uint8_t *help1 = "genBus sert a definir les parametres";
   		envoiePCSTM(help1, strlen(help1));
    	uint8_t *help2 = " pour la communication via UART, I2C et SPI \n";
   		envoiePCSTM(help2, strlen(help2));
    	uint8_t *help3 = "Ces commandes sont :\n";
   		envoiePCSTM(help3, strlen(help3));
    	uint8_t *help4 = "-p doit etre suivi d'un entier tel que: \n";
   		envoiePCSTM(help4, strlen(help4));
    	uint8_t *help5 = " 1 pour I2C \n 2 pour UART \n 3 pour SPI\n";
   		envoiePCSTM(help5, strlen(help5));
    	uint8_t *help6 = "-f doit etre suivi d'un entier representatif de la frequence de la communication \n";
   		envoiePCSTM(help6, strlen(help6));
    	uint8_t *help7 = "-o doit etre suivi d'un entier representatif du nombre d'octet de la communication \n";
   		envoiePCSTM(help7, strlen(help7));
    	uint8_t *help8 = "-m doit etre suivi d'un entier representatif d'un mot binaire \n";
    	envoiePCSTM(help8, strlen(help8));
    	uint8_t *help40 = "-i doit etre suivi d'un entier representatif de la taille du mot\n";
   		envoiePCSTM(help40, strlen(help40));
    	uint8_t *help41 = "-e doit etre suivi d'un entier representatif du numero d'identification de la commande\n";
   		envoiePCSTM(help41, strlen(help41));
    	uint8_t *help42 = "-t doit etre suivi d'un entier representatif de l'operateur baud\n";
   		envoiePCSTM(help42, strlen(help42));
    	uint8_t *help43 = "-u doit etre suivi d'un entier representatif du facteur de baud\n";
   		envoiePCSTM(help43, strlen(help43));
    	uint8_t *help44 = "-a doit etre suivi d'un entier representatif de l'adresse de l'esclave\n";
   		envoiePCSTM(help44, strlen(help44));
    	uint8_t *help60 = "-b doit etre suivi d'un entier representatif du nombre de pins\n";
   		envoiePCSTM(help60, strlen(help60));
    	uint8_t *help24 = "-c doit etre suivi d'un entier representatif de l'intention de commencer une generation \n";
       	envoiePCSTM(help24, strlen(help24));
        uint8_t *help25 = " 1 pour commencer la generation \n 0 pour ne pas commencer la generation \n";
       	envoiePCSTM(help25, strlen(help25));
        uint8_t *help45 = "\n/!\Attention/!\ \nN'envoyer pas toutes les commandes sur une ligne !\nEnvoyer au max 4 commandes sur une ligne :\n";
       	envoiePCSTM(help45, strlen(help45));
        uint8_t *help46 = "Exemple d'utilisation de genBus\n genBus -p 1 -f 9 -o 1 -m 11011011\n genBus -i 5 -e 4 -t 3 -u 2\n";
       	envoiePCSTM(help46, strlen(help46));
        uint8_t *help47 = " genBus -a 55 -b 5 -c 1\n";
       	envoiePCSTM(help47, strlen(help47));

    	uint8_t *help9 = "\ngenFlux sert a definir les parametres pour generer une mire \n";
   		envoiePCSTM(help9, strlen(help9));
    	uint8_t *help10 = "Ces commandes sont :  \n";
   		envoiePCSTM(help10, strlen(help10));
    	uint8_t *help11 = "-r doit etre suivi de deux entiers representatifs de la resolution tel que entier x entier \n";
   		envoiePCSTM(help11, strlen(help11));
    	uint8_t *help12 = "-m doit etre suivi d'un entier representatif du type de la mire \n";
   		envoiePCSTM(help12, strlen(help12));
    	uint8_t *help13 = " 1 pour Mire barre code \n 2 pour Mire contour blanc \n 3 pour Mire green/red\n 4 pour Mire horizontalBandMire\n 5 pour Mire horizontalShadeGray\n";
   		envoiePCSTM(help13, strlen(help13));
    	uint8_t *help14 = " 6 pour Mire PatchWork\n 7 pour Mire RectShadesGray\n 8 pour Mire SwitchBlackWhite\n 9 pour Mire VerticalBlandMire\n 10 pour Mire VerticalShadesGray\n";
   		envoiePCSTM(help14, strlen(help14));
    	uint8_t *help15 = "-s doit etre suivi d'un entier representatif du standard \n";
       	envoiePCSTM(help15, strlen(help15));
        uint8_t *help16 = " 1 pour SDI \n 2 pour HDMI \n";
       	envoiePCSTM(help16, strlen(help16));
    	uint8_t *help30 = "-f doit etre suivi de deux entiers representatifs du front porch horizontale et verticale tel que entier x entier\n ";
   		envoiePCSTM(help30, strlen(help30));
    	uint8_t *help31 = "-b doit etre suivi de deux entiers representatifs du back porch horizontale et verticale tel que entier x entier\n";
   		envoiePCSTM(help31, strlen(help31));
    	uint8_t *help32 = "-l doit etre suivi de deux entiers representatifs des nombres de pixels row et column tel que entier x entier\n";
       	envoiePCSTM(help32, strlen(help32));
        uint8_t *help33 = "-a doit etre suivi de deux entiers representatifs de la sync pulse horizontale et verticale tel que entier x entier\n";
       	envoiePCSTM(help33, strlen(help33));
    	uint8_t *help34 = "-d doit etre suivi de deux entiers representatifs de la sync polarity horizontale et verticale tel que entier x entier\n";
       	envoiePCSTM(help34, strlen(help34));
        uint8_t *help35 = "-p doit etre suivi d'un entier representatif de l'horloge des pixels\n";
       	envoiePCSTM(help35, strlen(help35));
    	uint8_t *help22 = "-c doit etre suivi d'un entier representatif de l'intention de commencer une generation \n";
       	envoiePCSTM(help22, strlen(help22));
        uint8_t *help23 = " 1 pour commencer la generation \n 0 pour ne pas commencer la generation \n";
       	envoiePCSTM(help23, strlen(help23));
        uint8_t *help36 = "\n/!\Attention/!\ \nN'envoyer pas toutes les commandes sur une ligne !\nEnvoyer au max 4 commandes sur une ligne :\n";
       	envoiePCSTM(help36, strlen(help36));
        uint8_t *help37 = "Exemple d'utilisation de genFlux\n genFlux -r 1920x1080 -m 9 -s 1 -f 720x480\n genFlux -f 760 x 400 -b 830 x 520 -l 430x320 -a 520x230\n";
       	envoiePCSTM(help37, strlen(help37));
        uint8_t *help38 = " genFlux -d 430x220 -p 50 -c 1\n";
       	envoiePCSTM(help38, strlen(help38));


    	uint8_t *help20 = "\nrecBus sert a afficher les informations d'un bus de communication tel que:la frequence, l'octet et le mot binaire\n";
   		envoiePCSTM(help20, strlen(help20));

    	uint8_t *help21 = "\nrecFlux sert a afficher les informations d'un flux video tel que: la resolution, le blanking et le framerate\n";
   		envoiePCSTM(help21, strlen(help21));
    }
    else
    {
    }

}

void confirmationCMD(uint8_t cmd, void* str)
{
    uint8_t temp[250] = {0};
    uint8_t var[150] = {0};
    uint8_t tab[150] = {0};
    uint8_t dat[150] = {0};
    sprintf((char *) temp, "\nGENERATION FLUX VIDEO \n"
    		"Standard :");
    if(cmd == GENERATION_FLUX_CMD) {
   		s_gen_flux* gf = (s_gen_flux*) str;

   		if(gf->standard == 1){
   			sprintf((char *) temp, "%s SDI\n", (char *) temp);
   		}
   		else if(gf->standard == 2){
   			sprintf((char *) temp, "%s HDMI\n", (char *) temp);
   		}

   		sprintf((char *) temp, "%sResolution : %dx%d \n", (char *) temp, gf->width, gf->height);

   		switch (gf->mire)
   		{
   		case 1:
   			sprintf((char *) temp, "%sMire :  barre code\n", (char *) temp);
   		  break;
   		case 2:
   			sprintf((char *) temp, "%sMire :  contour blanc\n", (char *) temp);
   		  break;
   		case 3:
   			sprintf((char *) temp, "%sMire :  green_red\n", (char *) temp);
   		  break;
   		case 4:
   			sprintf((char *) temp, "%sMire : horizontalBandMire\n", (char *) temp);
   		  break;
   		case 5:
   			sprintf((char *) temp, "%sMire :  horizontalShadeGray\n", (char *) temp);
   		  break;
   		case 6:
   			sprintf((char *) temp, "%sMire :  PatchWork\n", (char *) temp);
   		  break;
   		case 7:
   			sprintf((char *) temp, "%sMire :  RectShadesGray\n", (char *) temp);
   		  break;
   		case 8:
   			sprintf((char *) temp, "%sMire :  SwitchBlackWhite\n", (char *) temp);
   		  break;
   		case 9:
   			sprintf((char *) temp, "%sMire :  VerticalBlandMire\n", (char *) temp);
   		  break;
   		case 10:
   			sprintf((char *) temp, "%sMire :  VerticalShadesGray\n", (char *) temp);
   		  break;
   		}
   		sprintf((char *) temp, "%sPixels : %dx%d \n", (char *) temp, gf->hlength, gf->vlength);
   		sprintf((char *) temp, "%sFront porch : %dx%d \n", (char *) temp, gf->hfp, gf->vfp);
   		sprintf((char *) temp, "%sSync pulse : %dx%d \n", (char *) temp, gf->hsyncpulse, gf->vsyncpulse);
   		sprintf((char *) temp, "%sBack porch : %dx%d \n", (char *) temp, gf->hbp, gf->vbp);
   		sprintf((char *) temp, "%sSync polarity : %dx%d \n", (char *) temp, gf->hpolsync, gf->vpolsync);
   		sprintf((char *) temp, "%sPixel clock : %d \n", (char *) temp, gf->pclock);
   		if(gf->commencer == 0){
   			sprintf((char *) temp, "%sCommencer : Non\n", (char *) temp);
   		}
   		else if(gf->commencer == 1){
   			sprintf((char *) temp, "%sCommencer : Oui\n", (char *) temp);
   		}
    		envoiePCSTM(temp, strlen((char *) temp));
    }

    sprintf((char *) var, "\nGENERATION BUS COMMUNICATION \n"
    		"Protocole :");
    if(cmd == GENERATION_BUS_CMD) {
   		s_gen_bus* gb = (s_gen_bus*) str;

   		if(gb->protocole == 1){
   			sprintf((char *) var, "%s I2C\n", (char *) var);
   		}
   		else if(gb->protocole == 2){
   			sprintf((char *) var, "%s UART\n", (char *) var);
   		}
   		else if(gb->protocole == 3){
   			sprintf((char *) var, "%s SPI\n", (char *) var);
   		}

   		sprintf((char *) var, "%sFrequence : %d \n", (char *) var, gb->freq);
   		sprintf((char *) var, "%sPins : %d \n", (char *) var, gb->pins);
   		sprintf((char *) var, "%sOctet : %d \n", (char *) var, gb->octet);
   		sprintf((char *) var, "%sMot binaire : %d \n", (char *) var, gb->motbinaire);
   		sprintf((char *) var, "%sTaille mot : %d \n", (char *) var, gb->taillemot);
   		sprintf((char *) var, "%sID Commande : %d \n", (char *) var, gb->idcmd);
   		sprintf((char *) var, "%sOperateur baud : %d \n", (char *) var, gb->operateur);
   		sprintf((char *) var, "%sFacteur baud : %d \n", (char *) var, gb->facteurbaud);
   		sprintf((char *) var, "%sAdresse : %d \n", (char *) var, gb->adresse);

   		if(gb->commencer == 0){
   			sprintf((char *) var, "%sCommencer : Non\n", (char *) var);
   		}
   		else if(gb->commencer == 1){
   			sprintf((char *) var, "%sCommencer : Oui\n", (char *) var);
   		}

   		envoiePCSTM(var, strlen((char *) var));
    }

    sprintf((char *) tab, "\nRECEPTION BUS COMMUNICATION \n");
    if(cmd == RECEPTION_BUS_CMD) {
    	s_rec_bus* rb = (s_rec_bus*) str;

   		sprintf((char *) tab, "%sTaille bus : %d \n", (char *) tab, rb->taillebus);
   		sprintf((char *) tab, "%sTaille mot : %d \n", (char *) tab, rb->taillemot);
   		sprintf((char *) tab, "%sAdresse : %d \n", (char *) tab, rb->adresse);
   		sprintf((char *) tab, "%sOperateur baud : %d \n", (char *) tab, rb->operateurbaud);
   		sprintf((char *) tab, "%sFacteur baud : %d \n", (char *) tab, rb->facteurbaud);
   		sprintf((char *) tab, "%sMot binaire : %d \n", (char *) tab, rb->motbinaire);

   		envoiePCSTM(tab, strlen((char *) tab));
    }

    sprintf((char *) dat, "\nRECEPTION FLUX VIDEO\n");
    if(cmd == RECEPTION_FLUX_CMD) {
    	s_rec_flux* rf = (s_rec_flux*) str;
       if((rf->data_dispo_SDI==1) && (rf->data_dispo_DVI==1))
       {
    	   sprintf((char *) dat, "%sDonnees issues du DVI & SDI\n", (char *) dat);
      		sprintf((char *) dat, "%sResolution : %dx%d\n", (char *) dat, rf->width, rf->height);
      		sprintf((char *) dat, "%sBlanking : %dx%d \n", (char *) dat, rf->blankingH, rf->blankingV);
      		sprintf((char *) dat, "%sFrame format : %d \n", (char *) dat, rf->frameformat);
      		sprintf((char *) dat, "%sVideo format : %d \n", (char *) dat, rf->vidformat);
      		sprintf((char *) dat, "%sSync : %dx%d\n", (char *) dat, rf->Hsync, rf->Vsync);
     }

       else if((rf->data_dispo_SDI==1) && (rf->data_dispo_DVI==0))
       {
    	   sprintf((char *) dat, "%sDonnees issues du SDI\n", (char *) dat);
      		sprintf((char *) dat, "%sFrame format : %d \n", (char *) dat, rf->frameformat);
      		sprintf((char *) dat, "%sVideo format : %d \n", (char *) dat, rf->vidformat);
      		sprintf((char *) dat, "%sBlanking : %dx%d \n", (char *) dat, rf->blankingH, rf->blankingV);
       }

       else if((rf->data_dispo_SDI==0) && (rf->data_dispo_DVI==1))
       {
    	   sprintf((char *) dat, "%sDonnees issues du DVI\n", (char *) dat);
      		sprintf((char *) dat, "%sResolution : %dx%d\n", (char *) dat, rf->width, rf->height);
      		sprintf((char *) dat, "%sSync : %dx%d\n", (char *) dat, rf->Hsync, rf->Vsync);
      		sprintf((char *) dat, "%sBlanking : %dx%d \n", (char *) dat, rf->blankingH, rf->blankingV);

       }
   		envoiePCSTM(dat, strlen((char *) dat));
    }
}

void envoiePCSTM(uint8_t* Buf, uint16_t Len)
{
	 CDC_Transmit_FS(Buf, Len); //Si on veut envoyer via un autre dispositif on peut le faire
	 HAL_Delay(10);
}

void clear_buffer(uint8_t * buffer_verif)
{
    int i;
    for(i=0; i<140; i++)
    {
            	buffer_verif[i]='\0';
    }

}
