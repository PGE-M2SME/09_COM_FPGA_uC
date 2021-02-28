/*
 * pcstm32.h
 *
 *  Created on: 7 févr. 2021
 *      Author: Manoah
 */

#ifndef APP_PCSTM32_H_
#define APP_PCSTM32_H_

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "usb_device.h"
#include "usbd_cdc_if.h"
#include "string.h"

/* Struct --------------------------------------------------------------------*/
typedef struct {
    int width; /*H resolution*/
    int height;  /*V resolution*/
    int mire;
    int standard;
    int hfp;
    int vfp;
    int hbp;
    int vbp;
    int hlength;
    int vlength;
    int hsyncpulse;
    int vsyncpulse;
    int hpolsync;
    int vpolsync;
    int pclock;
    int commencer;  /*Boolean a scrupter pour savoir si demande de generation (1=faite la generation)*/
} s_gen_flux;

typedef struct {
    int protocole;  /*Type de bus*/
    int freq;
    int octet;
    int motbinaire;
    int taillemot;
    int idcmd;
    int operateur;
    int facteurbaud;
    int adresse;
    int pins;
    int commencer;
} s_gen_bus;

typedef struct {
    int taillebus;
    int taillemot;
    int adresse;
    int operateurbaud;
    int facteurbaud;
    int motbinaire;
} s_rec_bus;

typedef struct {
    int width; /*H resolution*/
    int height;  /*V resolution*/
    int Hsync;
	int Vsync;
    int blankingH;
    int blankingV;
    int frameformat;
    int vidformat;
    int data_dispo_SDI;
    int data_dispo_DVI;

} s_rec_flux;

/* Prototypes ----------------------------------------------------------------*/
void confirmationCMD(uint8_t cmd, void* str);
void envoiePCSTM(uint8_t* Buf, uint16_t Len);
void s_gen_flux_config(s_gen_flux* gf);
void s_gen_bus_config(s_gen_bus* gb);
void s_rec_bus_config(s_rec_bus* rb);
void s_rec_flux_config(s_rec_flux* rf);
void help(void);
void clear_buffer(uint8_t * buffer_verif);

#endif /* APP_PCSTM32_H_ */
