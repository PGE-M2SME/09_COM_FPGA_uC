/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "crc.h"
#include "dma2d.h"
#include "i2c.h"
#include "rtc.h"
#include "spi.h"
#include "tim.h"
#include "usart.h"
#include "usb_device.h"
#include "gpio.h"
#include "fmc.h"
#include "app_touchgfx.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "lcd.h"
#include "lcd_TP.h"
#include "usbd_cdc_if.h"
#include "string.h"
#include "pcstm32.h"
#include "liaison_uc_fpga.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */
/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

	/* PARAMETRES POUR LA GENERATION DE FLUX*/
	int IHM_G_ResolH=0;
	int IHM_G_ResolV=0;
    int IHM_G_mire=0;
    int IHM_G_standard=0;
    int IHM_G_hfp=0;
    int IHM_G_vfp=0;
    int IHM_G_hbp=0;
    int IHM_G_vbp=0;
    int IHM_G_hlength=0;
    int IHM_G_vlength=0;
    int IHM_G_hsyncpulse=0;
    int IHM_G_vsyncpulse=0;
    int IHM_G_hpolsync=0;
    int IHM_G_vpolsync=0;
    int IHM_G_pclock=0;
    int IHM_G_fluxcommencer=0;

    /* PARAMETRES POUR LA GENERATION DU BUS*/
    int IHM_G_protocole=0;
    int IHM_G_freq=0;
    int IHM_G_octet=0;
    int IHM_G_motbinaire=0;
    int IHM_G_taillemot=0;
    int IHM_G_idcmd=0;
    int IHM_G_operateur=0;
    int IHM_G_facteurbaud=0;
    int IHM_G_adresse=0;
    int IHM_G_pins=0;
    int IHM_G_buscommencer=0;

    /* PARAMETRES POUR LA RECEPTION DU BUS*/
    int IHM_R_taillebus=0;
    int IHM_R_taillemot=0;
    int IHM_R_adresse=0;
    int IHM_R_operateurbaud=0;
    int IHM_R_facteurbaud=0;
    int IHM_R_motbinaire=0;
    int IHM_R_commencer=0;

    /* PARAMETRES POUR LA RECEPTION DU FLUX*/
    int IHM_R_ResolH=0;
	int IHM_R_ResolV=0;
    int IHM_R_Hsync=0;
	int IHM_R_Vsync=0;
    int IHM_R_blankingH=0;
    int IHM_R_blankingV=0;
    int IHM_R_frameformat=0;
    int IHM_R_vidformat=0;
    int IHM_R_data_dispo_SDI=0;
    int IHM_R_data_dispo_DVI=0;

    /* PARAMETRE POUR LA CONNEXION USB*/
    uint8_t buffer_verif[140]={'\0'};

    /* PARAMETRES GLOBAUX POUR LE SPI A COMPLETER*/

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
extern void DisplayDriver_TransferCompleteCallback();
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */
     IHM_R_taillebus=20;
     IHM_R_taillemot=40;
     IHM_R_adresse=5;
     IHM_R_operateurbaud=2;
     IHM_R_facteurbaud=3;
     IHM_R_motbinaire=1110;
     IHM_R_ResolH=1080;
 	 IHM_R_ResolV=7200;
     IHM_R_Hsync=0;
 	 IHM_R_Vsync=0;
     IHM_R_blankingH=0;
     IHM_R_blankingV=0;
     IHM_R_frameformat=0;
     IHM_R_vidformat=0;
     IHM_R_data_dispo_SDI=0;
     IHM_R_data_dispo_DVI=0;

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_FMC_Init();
  MX_CRC_Init();
  MX_DMA2D_Init();
  MX_TIM7_Init();
  MX_TIM6_Init();
  MX_I2C1_Init();
  MX_USB_DEVICE_Init();
  MX_RTC_Init();
  MX_UART4_Init();
  MX_SPI1_Init();
  MX_TouchGFX_Init();
  /* USER CODE BEGIN 2 */
  HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, 1);
  LCD_init();
  LCD_backlight(1);
  LCD_graphicsMode();
  LCD_TP_init();
  HAL_TIM_Base_Start_IT(&htim7);
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  s_gen_flux gf;
  s_gen_bus gb;
  s_rec_bus rb;
  s_rec_flux rf;
  while (1)
  {
	    /* USER CODE END WHILE */
		    if(buffer_verif[0]!='\0')
		    {
				    s_gen_flux_config( &gf);
				    s_gen_bus_config( &gb);
				    s_rec_bus_config( &rb);
				    s_rec_flux_config( &rf);

				    if(gf.commencer==1)
				    {
				        IHM_G_ResolH=gf.width;
				        IHM_G_ResolV=gf.height;
				        IHM_G_mire=gf.mire;
				        IHM_G_standard=gf.standard;
				        IHM_G_hfp=gf.hfp;
				        IHM_G_vfp=gf.vfp;
				        IHM_G_hbp=gf.hbp;
				        IHM_G_vbp=gf.vbp;
				        IHM_G_hlength=gf.hlength;
				        IHM_G_vlength=gf.vlength;
				        IHM_G_hsyncpulse=gf.hsyncpulse;
				        IHM_G_vsyncpulse=gf.vsyncpulse;
				        IHM_G_hpolsync=gf.hpolsync;
				        IHM_G_vpolsync=gf.vpolsync;
				        IHM_G_pclock=gf.pclock;
				    }

				    if(gb.commencer==1)
				    {
				        IHM_G_protocole=gb.protocole;
				        IHM_G_freq=gb.freq;
				        IHM_G_octet=gb.octet;
				        IHM_G_motbinaire=gb.motbinaire;
				        IHM_G_taillemot=gb.taillemot;
				        IHM_G_idcmd=gb.idcmd;
				        IHM_G_operateur=gb.operateur;
				        IHM_G_facteurbaud=gb.facteurbaud;
				        IHM_G_adresse=gb.adresse;
				        IHM_G_pins=gb.pins;
				    }
				    clear_buffer(buffer_verif);
			 }
		  MX_TouchGFX_Process();
		  //LIAISON STM32 FPGA
		  if(IHM_G_fluxcommencer==1)
		  	 {
		      //Completer par l'envoie des donnees du STM32 au FPGA de la generation FLUX
				//Exemple: votre_fonction_denvoie_pour_la_generation_flux(IHM_G_ResolH,et autres parametres);
			  Envoie_DVI();
			  //A la fin on remet la variable a 0 comme ce qui suit ! DONC NE PAS MODIFIER LA LIGNE SUIVANTE !
			  IHM_G_fluxcommencer=0;
			 }

		  else if(IHM_G_buscommencer==1)
			 {
			  //Completer par l'envoie des donnees du STM32 au FPGA de la generation BUS
			  //Exemple: votre_fonction_denvoie_pour_la_generation_bus(IHM_G_protocole,et autres parametres);
			  Envoie_Bus_com();
			  //A la fin on remet la variable a 0 comme ce qui suit ! DONC NE PAS MODIFIER LA LIGNE SUIVANTE !
			  IHM_G_buscommencer=0;
			 }

		  else if(IHM_R_commencer==1)
			 {
			  //Completer par la reception des donnees du FPGA au STM32 de la reception FLUX
			  //Les parametres globales a completer sont des entiers ainsi faites comme l'exemple
			  //Exemple:  IHM_R_ResolH = votre_fonction_de_reception_de_la_resolution_en_hauteur();
			   rb.adresse = IHM_R_adresse;
			   rb.facteurbaud = IHM_R_facteurbaud;
			   rb.motbinaire = IHM_R_motbinaire;
			   rb.operateurbaud = IHM_R_operateurbaud;
			   rb.taillebus = IHM_R_taillebus;
			   rb.taillemot = IHM_R_taillemot;
			  //A la fin on remet la variable a 0 comme ce qui suit ! DONC NE PAS MODIFIER LA LIGNE SUIVANTE !
			  IHM_R_commencer=0;
			 }

		  else if((IHM_R_data_dispo_SDI==1) ||(IHM_R_data_dispo_DVI==1))
			 {
			  //Completer par la reception des donnees du FPGA au STM32 de la reception BUS
			  //Les parametres globales a completer sont des entiers ainsi faites comme l'exemple
			  //Exemple:  IHM_R_taillebus = votre_fonction_de_reception_de_la_tailledubus();
			  	  if (IHM_R_data_dispo_SDI==1)
			  	  {
				  	  rf.blankingH = IHM_R_blankingH;
				  	  rf.blankingV = IHM_R_blankingV;
				  	  rf.frameformat = IHM_R_frameformat;
				  	  rf.vidformat = IHM_R_vidformat;
			  	  }else if(IHM_R_data_dispo_DVI==1)
			  	  {
				  	  rf.height = IHM_R_ResolV;
				  	  rf.width = IHM_R_ResolH;
				  	  rf.Hsync = IHM_R_Hsync;
				  	  rf.Vsync = IHM_R_Vsync;
				  	  rf.blankingH = IHM_R_blankingH;
				  	  rf.blankingV = IHM_R_blankingV;
			  	  }

			  //A la fin on remet la variable a 0 comme ce qui suit ! DONC NE PAS MODIFIER LES 2 LIGNES SUIVANTES !
			  IHM_R_data_dispo_SDI=0;
			  IHM_R_data_dispo_DVI=0;
			 }
		    /* USER CODE BEGIN 3 */
		  }

	  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};
  RCC_PeriphCLKInitTypeDef PeriphClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE3);
  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_LSI|RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.LSIState = RCC_LSI_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLM = 4;
  RCC_OscInitStruct.PLL.PLLN = 72;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 3;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
  {
    Error_Handler();
  }
  PeriphClkInitStruct.PeriphClockSelection = RCC_PERIPHCLK_RTC;
  PeriphClkInitStruct.RTCClockSelection = RCC_RTCCLKSOURCE_LSI;
  if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
}

/* USER CODE BEGIN 4 */
int touchgfxDisplayDriverTransmitActive(){
	if(!LCD_isBusy(0x50, 0x80)) return 1;
	return 0;

}
void touchgfxDisplayDriverTransmitBlock(const uint8_t* pixels, uint16_t x, uint16_t y, uint16_t w, uint16_t h){
	LCD_drawBuffer((uint16_t *)pixels, x, y, w, h);
	DisplayDriver_TransferCompleteCallback();
}
/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
