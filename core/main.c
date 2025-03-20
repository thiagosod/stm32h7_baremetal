/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

#include "stm32h7xx.h"

void SysTick_Handler(void)
{
    // Your 1ms periodic code here
}


void SysTick_Init(void)
{
    SystemCoreClockUpdate();  // Ensure SystemCoreClock is updated
    SysTick->LOAD = (SystemCoreClock / 1000) - 1; // 1ms
    SysTick->VAL = 0; // Clear current value
    SysTick->CTRL = SysTick_CTRL_CLKSOURCE_Msk | // Use processor clock
                    SysTick_CTRL_TICKINT_Msk   | // Enable interrupt
                    SysTick_CTRL_ENABLE_Msk;   // Enable SysTick
}

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
	SysTick_Init();
	while (1)
	{
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
	}
  /* USER CODE END 3 */
}
