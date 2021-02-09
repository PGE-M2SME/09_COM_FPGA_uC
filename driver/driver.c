/**
  ******************************************************************************
  * @file           : driver.c
  * @brief          : drivers declarations
  ******************************************************************************
  * @athors        : Clément Berges, Farouk Madouni, Youssef Abbih
  ******************************************************************************
  */
#include "driver.h"
extern hspi1; // if you use another SPI modify this handler example hspi2 or hspi3

uint8_t* receive_from_fpga(GPIO_TypeDef * FPGA1_port, uint16_t FPGA1_pin,uint8_t dataRx[10])
{
    HAL_GPIO_WritePin (FPGA1_port, FPGA1_pin, GPIO_PIN_RESET);
	HAL_SPI_Receive (&hspi1, dataRx, 10,100);
	HAL_GPIO_WritePin (FPGA1_port, FPGA1_pin, GPIO_PIN_SET);
	return dataRx;
}
void send_to_fpga(GPIO_TypeDef * FPGA2_port, uint16_t FPGA2_pin,uint8_t dataTx[10])
{

	HAL_GPIO_WritePin (FPGA2_port, FPGA2_pin, GPIO_PIN_RESET);
	HAL_SPI_Transmit (&hspi1, dataTx, 10,100);
	HAL_GPIO_WritePin (FPGA2_port, FPGA2_pin, GPIO_PIN_SET);
}
