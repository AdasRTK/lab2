/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

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

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

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
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  void display7SEG (int num, GPIO_TypeDef* LEDa_GPIO_Port, uint16_t LEDa_Pin,
		  GPIO_TypeDef* LEDb_GPIO_Port, uint16_t LEDb_Pin,
		  GPIO_TypeDef* LEDc_GPIO_Port, uint16_t LEDc_Pin,
		  GPIO_TypeDef* LEDd_GPIO_Port, uint16_t LEDd_Pin,
		  GPIO_TypeDef* LEDe_GPIO_Port, uint16_t LEDe_Pin,
		  GPIO_TypeDef* LEDf_GPIO_Port, uint16_t LEDf_Pin,
		  GPIO_TypeDef* LEDg_GPIO_Port, uint16_t LEDg_Pin)
  {
	  switch(num)
	  {
	  case 0:
		  HAL_GPIO_WritePin(LEDa_GPIO_Port, LEDa_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDb_GPIO_Port, LEDb_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDc_GPIO_Port, LEDc_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDd_GPIO_Port, LEDd_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDe_GPIO_Port, LEDe_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDf_GPIO_Port, LEDf_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDg_GPIO_Port, LEDg_Pin, GPIO_PIN_SET);
		  break;
	  case 1:
		  HAL_GPIO_WritePin(LEDa_GPIO_Port, LEDa_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(LEDb_GPIO_Port, LEDb_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDc_GPIO_Port, LEDc_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDd_GPIO_Port, LEDd_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(LEDe_GPIO_Port, LEDe_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(LEDf_GPIO_Port, LEDf_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(LEDg_GPIO_Port, LEDg_Pin, GPIO_PIN_SET);
		  break;
	  case 2:
		  HAL_GPIO_WritePin(LEDa_GPIO_Port, LEDa_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDb_GPIO_Port, LEDb_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDc_GPIO_Port, LEDc_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(LEDd_GPIO_Port, LEDd_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDe_GPIO_Port, LEDe_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDf_GPIO_Port, LEDf_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(LEDg_GPIO_Port, LEDg_Pin, GPIO_PIN_RESET);
		  break;
	  case 3:
		  HAL_GPIO_WritePin(LEDa_GPIO_Port, LEDa_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDb_GPIO_Port, LEDb_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDc_GPIO_Port, LEDc_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDd_GPIO_Port, LEDd_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDe_GPIO_Port, LEDe_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(LEDf_GPIO_Port, LEDf_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(LEDg_GPIO_Port, LEDg_Pin, GPIO_PIN_RESET);
		  break;
	  case 4:
		  HAL_GPIO_WritePin(LEDa_GPIO_Port, LEDa_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(LEDb_GPIO_Port, LEDb_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDc_GPIO_Port, LEDc_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDd_GPIO_Port, LEDd_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(LEDe_GPIO_Port, LEDe_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(LEDf_GPIO_Port, LEDf_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDg_GPIO_Port, LEDg_Pin, GPIO_PIN_RESET);
		  break;
	  case 5:
		  HAL_GPIO_WritePin(LEDa_GPIO_Port, LEDa_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDb_GPIO_Port, LEDb_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(LEDc_GPIO_Port, LEDc_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDd_GPIO_Port, LEDd_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDe_GPIO_Port, LEDe_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(LEDf_GPIO_Port, LEDf_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDg_GPIO_Port, LEDg_Pin, GPIO_PIN_RESET);
		  break;
	  case 6:
		  HAL_GPIO_WritePin(LEDa_GPIO_Port, LEDa_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDb_GPIO_Port, LEDb_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(LEDc_GPIO_Port, LEDc_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDd_GPIO_Port, LEDd_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDe_GPIO_Port, LEDe_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDf_GPIO_Port, LEDf_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDg_GPIO_Port, LEDg_Pin, GPIO_PIN_RESET);
		  break;
	  case 7:
		  HAL_GPIO_WritePin(LEDa_GPIO_Port, LEDa_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDb_GPIO_Port, LEDb_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDc_GPIO_Port, LEDc_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDd_GPIO_Port, LEDd_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(LEDe_GPIO_Port, LEDe_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(LEDf_GPIO_Port, LEDf_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(LEDg_GPIO_Port, LEDg_Pin, GPIO_PIN_SET);
		  break;
	  case 8:
		  HAL_GPIO_WritePin(LEDa_GPIO_Port, LEDa_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDb_GPIO_Port, LEDb_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDc_GPIO_Port, LEDc_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDd_GPIO_Port, LEDd_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDe_GPIO_Port, LEDe_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDf_GPIO_Port, LEDf_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDg_GPIO_Port, LEDg_Pin, GPIO_PIN_RESET);
		  break;
	  case 9:
		  HAL_GPIO_WritePin(LEDa_GPIO_Port, LEDa_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDb_GPIO_Port, LEDb_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDc_GPIO_Port, LEDc_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDd_GPIO_Port, LEDd_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDe_GPIO_Port, LEDe_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(LEDf_GPIO_Port, LEDf_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LEDg_GPIO_Port, LEDg_Pin, GPIO_PIN_RESET);
		  break;
	  }
  }

  int sec1;
  int sec2;
  int tick=10;
  while (1)
  {
	  	  if(tick < 1)
	  	  {
	  	  tick = 10;
	  	  }

	  	  if(tick == 10)
	  	  {
	  		  sec1=5;
	  		  sec2=3;
	  		  HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, GPIO_PIN_RESET);
	  		  HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, GPIO_PIN_SET);
	  		  HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, GPIO_PIN_SET);
	  		  HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, GPIO_PIN_SET);
	  		  HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, GPIO_PIN_SET);
	  		  HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, GPIO_PIN_RESET);
	  	  }
	  	  if(tick == 7)
	  	  {
	  		  sec2=2;
	  		  HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, GPIO_PIN_RESET);
	  		  HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, GPIO_PIN_SET);
	  	  }

	  	  if(tick == 5)
	  	  {
	  		  sec1=3;
	  		  sec2=5;
	  		  HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, GPIO_PIN_RESET);
	  		  HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, GPIO_PIN_SET);
	  		  HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, GPIO_PIN_SET);
	  		  HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, GPIO_PIN_RESET);
	  		  HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, GPIO_PIN_SET);
	  	  }

	  	  if(tick == 2)
	  	  {
	  		  sec1=2;
	  		  HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, GPIO_PIN_RESET);
	  		  HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, GPIO_PIN_SET);
	  		  HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, GPIO_PIN_SET);
	  	  }
  		  display7SEG(sec1, LEDa1_GPIO_Port, LEDa1_Pin,
  			  			  			  LEDb1_GPIO_Port, LEDb1_Pin,
  			  			  			  LEDc1_GPIO_Port, LEDc1_Pin,
  			  			  			  LEDd1_GPIO_Port, LEDd1_Pin,
  			  			  			  LEDe1_GPIO_Port, LEDe1_Pin,
  			  			  			  LEDf1_GPIO_Port, LEDf1_Pin,
  			  			  			  LEDg1_GPIO_Port, LEDg1_Pin);
  		  display7SEG(sec2, LEDa2_GPIO_Port, LEDa2_Pin,
  			  			  			  LEDb2_GPIO_Port, LEDb2_Pin,
  			  			  			  LEDc2_GPIO_Port, LEDc2_Pin,
  			  			  			  LEDd2_GPIO_Port, LEDd2_Pin,
  			  			  			  LEDe2_GPIO_Port, LEDe2_Pin,
  			  			  			  LEDf2_GPIO_Port, LEDf2_Pin,
  			  			  			  LEDg2_GPIO_Port, LEDg2_Pin);
  		  sec1--;
  		  sec2--;
	  	  tick--;
	  	  HAL_Delay(1000);
    /* USER CODE END WHILE */

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

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, LED_RED1_Pin|LED_YELLOW1_Pin|LED_GREEN1_Pin|LED_RED2_Pin
                          |LED_YELLOW2_Pin|LED_GREEN2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, LEDa1_Pin|LEDb1_Pin|LEDc1_Pin|LEDd2_Pin
                          |LEDe2_Pin|LEDf2_Pin|LEDg2_Pin|LEDd1_Pin
                          |LEDe1_Pin|LEDf1_Pin|LEDg1_Pin|LEDa2_Pin
                          |LEDb2_Pin|LEDc2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : LED_RED1_Pin LED_YELLOW1_Pin LED_GREEN1_Pin LED_RED2_Pin
                           LED_YELLOW2_Pin LED_GREEN2_Pin */
  GPIO_InitStruct.Pin = LED_RED1_Pin|LED_YELLOW1_Pin|LED_GREEN1_Pin|LED_RED2_Pin
                          |LED_YELLOW2_Pin|LED_GREEN2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : LEDa1_Pin LEDb1_Pin LEDc1_Pin LEDd2_Pin
                           LEDe2_Pin LEDf2_Pin LEDg2_Pin LEDd1_Pin
                           LEDe1_Pin LEDf1_Pin LEDg1_Pin LEDa2_Pin
                           LEDb2_Pin LEDc2_Pin */
  GPIO_InitStruct.Pin = LEDa1_Pin|LEDb1_Pin|LEDc1_Pin|LEDd2_Pin
                          |LEDe2_Pin|LEDf2_Pin|LEDg2_Pin|LEDd1_Pin
                          |LEDe1_Pin|LEDf1_Pin|LEDg1_Pin|LEDa2_Pin
                          |LEDb2_Pin|LEDc2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

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
