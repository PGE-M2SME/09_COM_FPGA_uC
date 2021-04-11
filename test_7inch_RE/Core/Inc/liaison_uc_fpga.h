/*
 * liaison_uc_fpga.h
 *
 *  Created on: 15 mars 2021
 *      Author: manoa
 */

#ifndef INC_LIAISON_UC_FPGA_H_
#define INC_LIAISON_UC_FPGA_H_

/* Includes ------------------------------------------------------------------*/
#include "pcstm32.h"
#include "main.h"
#include "stdlib.h"

/* Prototypes ----------------------------------------------------------------*/
void Envoie_Bus_com();
void Send_SPI(uint8_t* Tx);
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin);
void Read_SPI(uint8_t* Rx_SPI);
void allocation_trame(uint8_t* tab_trames);
void Envoie_DVI();

#endif /* INC_LIAISON_UC_FPGA_H_ */
