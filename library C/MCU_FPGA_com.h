/*
 * MCU_FPGA_com.h
 *
 *  Created on: Feb 18, 2021
 *      Author: chicken
 */

#ifndef APP_MCU_FPGA_COM_H_
#define APP_MCU_FPGA_COM_H_

/* Includes ------------------------------------------------------------------*/
#include "pcstm32.h"
#include "main.h"
#include "stdlib.h"

/* Prototypes ----------------------------------------------------------------*/
void Envoie_Bus_com(s_gen_bus* gb);
void Send_SPI(uint8_t* Tx);
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin);
void Read_SPI(uint8_t* Rx_SPI);
void allocation_trame(uint8_t* tab_trames);
//void allocation_trame(uint8_t* tab_trames, s_rec_flux* rf, s_rec_bus* rb);
void Envoie_DVI(s_gen_flux* gf);
void get_struct(s_rec_flux* rf, s_rec_bus* rb);

#endif /* APP_MCU_FPGA_COM_H_ */
