/**
  ******************************************************************************
  * @file    ds18b20.h
  * @author  Nguyen Phuoc Nguyen
  * @date    08-11-2020
  * @brief   This file contains definitions for 
	
  ******************************************************************************
  */
	/* Define to prevent recursive inclusion -------------------------------------*/
	#ifndef __DS18B20_H
	#define __DS18B20_H
	/* Includes ------------------------------------------------------------------*/
	# include "stm32f1xx.h"
	/* Exported define ------------------------------------------------------------*/
   #define DS18B20_PORT  GPIOA
   #define DS18B20_PIN   GPIO_PIN_1
	/* Exported functions prototypes ---------------------------------------------*/
	 uint8_t DS18B20_Start (void);
	 void DS18B20_Write (uint8_t data);
	 uint8_t DS18B20_Read (void);
	 
	#endif