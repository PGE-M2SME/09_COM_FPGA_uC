/**
  ******************************************************************************
  * @file           : driver.h
  * @brief          : drivers header
  ******************************************************************************
  * @athors        : Clément Berges, Farouk Madouni, Youssef Abbih
  ******************************************************************************
  */
#include "stm32l1xx_hal.h" // if you use annother ST board change this library example: #include "stm32f4xx_hal.h"
uint8_t* receive_from_fpga(GPIO_TypeDef * FPGA1_port, uint16_t FPGA1_pin);
/** 
* receive data from slave.
* @param[in] GPIOx: where x can be (A..K) to select the GPIO peripheral.
* @param[in] GPIO_Pin_x: specifies the port bit to be written. where x can be (0..15).
* return : data array
*/
void send_to_fpga(GPIO_TypeDef * FPGA2_port, uint16_t FPGA2_pin,uint8_t data[10]);
/** 
* send data to slave.
* @param[in] GPIOx: where x can be (A..K) to select the GPIO peripheral.
* @param[in] GPIO_Pin_x: specifies the port bit to be written. where x can be (0..15).
* @param[in] data[10]: data array to be send to the slave.
* return : None
*/


/*

this is how to call the functions in the main:

first we declare a pointer in the main fuction (int *p) then we assign it with the function receive

p = receive_from_fpga(GPIOB, 6) : : GPIO port B, GPIO pin number 6

send_to_fpga(GPIOC, 7,data[1]) : GPIO port C, GPIO pin number 7, send content of data[1] to the slave

*/