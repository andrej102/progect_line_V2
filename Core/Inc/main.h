/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32h7xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define RW_LCD_Pin GPIO_PIN_2
#define RW_LCD_GPIO_Port GPIOE
#define D0_LCD_Pin GPIO_PIN_3
#define D0_LCD_GPIO_Port GPIOE
#define D1_LCD_Pin GPIO_PIN_4
#define D1_LCD_GPIO_Port GPIOE
#define D2_LCD_Pin GPIO_PIN_5
#define D2_LCD_GPIO_Port GPIOE
#define D3_LCD_Pin GPIO_PIN_6
#define D3_LCD_GPIO_Port GPIOE
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define MCO_Pin GPIO_PIN_0
#define MCO_GPIO_Port GPIOH
#define RMII_MDC_Pin GPIO_PIN_1
#define RMII_MDC_GPIO_Port GPIOC
#define RMII_REF_CLK_Pin GPIO_PIN_1
#define RMII_REF_CLK_GPIO_Port GPIOA
#define RMII_MDIO_Pin GPIO_PIN_2
#define RMII_MDIO_GPIO_Port GPIOA
#define RMII_CRS_DV_Pin GPIO_PIN_7
#define RMII_CRS_DV_GPIO_Port GPIOA
#define RMII_RXD0_Pin GPIO_PIN_4
#define RMII_RXD0_GPIO_Port GPIOC
#define RMII_RXD1_Pin GPIO_PIN_5
#define RMII_RXD1_GPIO_Port GPIOC
#define LED_GREEN_Pin GPIO_PIN_0
#define LED_GREEN_GPIO_Port GPIOB
#define COMP1_INP_LINE1_VIDEO_Pin GPIO_PIN_2
#define COMP1_INP_LINE1_VIDEO_GPIO_Port GPIOB
#define RS_LCD_Pin GPIO_PIN_7
#define RS_LCD_GPIO_Port GPIOE
#define LINE_ST_Pin GPIO_PIN_8
#define LINE_ST_GPIO_Port GPIOE
#define GPIO_EXTI9_SWITCH_Pin GPIO_PIN_9
#define GPIO_EXTI9_SWITCH_GPIO_Port GPIOE
#define GPIO_EXTI9_SWITCH_EXTI_IRQn EXTI9_5_IRQn
#define COMP2_INP_LINE2_VIDEO_Pin GPIO_PIN_11
#define COMP2_INP_LINE2_VIDEO_GPIO_Port GPIOE
#define LINE1_EOS_Pin GPIO_PIN_14
#define LINE1_EOS_GPIO_Port GPIOE
#define LINE2_EOS_Pin GPIO_PIN_15
#define LINE2_EOS_GPIO_Port GPIOE
#define RMII_TXD1_Pin GPIO_PIN_13
#define RMII_TXD1_GPIO_Port GPIOB
#define LED_RED_Pin GPIO_PIN_14
#define LED_RED_GPIO_Port GPIOB
#define STLK_VCP_RX_Pin GPIO_PIN_8
#define STLK_VCP_RX_GPIO_Port GPIOD
#define STLK_VCP_TX_Pin GPIO_PIN_9
#define STLK_VCP_TX_GPIO_Port GPIOD
#define USB_FS_PWR_EN_Pin GPIO_PIN_10
#define USB_FS_PWR_EN_GPIO_Port GPIOD
#define USB_FS_OVCR_Pin GPIO_PIN_7
#define USB_FS_OVCR_GPIO_Port GPIOG
#define USB_FS_OVCR_EXTI_IRQn EXTI9_5_IRQn
#define USB_FS_VBUS_Pin GPIO_PIN_9
#define USB_FS_VBUS_GPIO_Port GPIOA
#define USB_FS_ID_Pin GPIO_PIN_10
#define USB_FS_ID_GPIO_Port GPIOA
#define USB_FS_DM_Pin GPIO_PIN_11
#define USB_FS_DM_GPIO_Port GPIOA
#define USB_FS_DP_Pin GPIO_PIN_12
#define USB_FS_DP_GPIO_Port GPIOA
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define ROW0_Pin GPIO_PIN_0
#define ROW0_GPIO_Port GPIOD
#define ROW1_Pin GPIO_PIN_1
#define ROW1_GPIO_Port GPIOD
#define ROW2_Pin GPIO_PIN_2
#define ROW2_GPIO_Port GPIOD
#define ROW3_Pin GPIO_PIN_3
#define ROW3_GPIO_Port GPIOD
#define COL0_Pin GPIO_PIN_4
#define COL0_GPIO_Port GPIOD
#define COL1_Pin GPIO_PIN_5
#define COL1_GPIO_Port GPIOD
#define COL3_Pin GPIO_PIN_6
#define COL3_GPIO_Port GPIOD
#define COL3D7_Pin GPIO_PIN_7
#define COL3D7_GPIO_Port GPIOD
#define RMII_TX_EN_Pin GPIO_PIN_11
#define RMII_TX_EN_GPIO_Port GPIOG
#define RMII_TXD0_Pin GPIO_PIN_13
#define RMII_TXD0_GPIO_Port GPIOG
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB
#define TIM17_CH1_LINE_CLK_Pin GPIO_PIN_9
#define TIM17_CH1_LINE_CLK_GPIO_Port GPIOB
#define E_LCD_Pin GPIO_PIN_0
#define E_LCD_GPIO_Port GPIOE
#define LED_YELLOW_Pin GPIO_PIN_1
#define LED_YELLOW_GPIO_Port GPIOE
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
