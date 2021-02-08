#include "stm32l1xx_hal.h"
uint8_t* receive_from_fpga(GPIO_TypeDef * FPGA1_port, uint16_t FPGA1_pin,uint8_t data[10]);
void send_to_fpga(GPIO_TypeDef * FPGA2_port, uint16_t FPGA2_pin,uint8_t data[10]);
