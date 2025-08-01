/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define BUTTON_1_Pin GPIO_PIN_3
#define BUTTON_1_GPIO_Port GPIOE
#define BUTTON_1_EXTI_IRQn EXTI3_IRQn
#define BUTTON_2_Pin GPIO_PIN_15
#define BUTTON_2_GPIO_Port GPIOC
#define BUTTON_2_EXTI_IRQn EXTI15_10_IRQn
#define RIGHT_BLUE_Pin GPIO_PIN_0
#define RIGHT_BLUE_GPIO_Port GPIOB
#define BUTTON_4_Pin GPIO_PIN_10
#define BUTTON_4_GPIO_Port GPIOD
#define BUTTON_4_EXTI_IRQn EXTI15_10_IRQn
#define LEFT_RED_Pin GPIO_PIN_12
#define LEFT_RED_GPIO_Port GPIOD
#define LEFT_GREEN_Pin GPIO_PIN_13
#define LEFT_GREEN_GPIO_Port GPIOD
#define LEFT_BLUE_Pin GPIO_PIN_14
#define LEFT_BLUE_GPIO_Port GPIOD
#define RIGHT_RED_Pin GPIO_PIN_6
#define RIGHT_RED_GPIO_Port GPIOC
#define BUTTON_3_Pin GPIO_PIN_4
#define BUTTON_3_GPIO_Port GPIOD
#define BUTTON_3_EXTI_IRQn EXTI4_IRQn
#define RIGHT_GREEN_Pin GPIO_PIN_5
#define RIGHT_GREEN_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */
extern UART_HandleTypeDef huart3;
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
