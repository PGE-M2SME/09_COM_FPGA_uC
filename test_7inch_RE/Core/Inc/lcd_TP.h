/*
 * lcd_TP.h
 *
 *  Created on: Oct 25, 2020
 *      Author: SofianeAOUCI
 */

#ifndef INC_LCD_TP_H_
#define INC_LCD_TP_H_


#include "main.h"

#define LCD_TP_ADDRESS 0xBA
#define LCD_TP_REGISTERS_CONFIGURATION 0x6A2
#define LCD_TP_REGISTERS_ALL_DATA 0x721
#define LCD_TP_REGISTERS_STATUS 0x721
#define LCD_TP_REGISTERS_DATA_T1 0x723


uint8_t LCD_TP_init(void);
uint8_t LCD_TP_getStatus(void);
void LCD_TP_getT1(uint16_t* X, uint16_t* Y);

#endif /* INC_LCD_TP_H_ */
