/*
 * Appinterrupt.c
 *
 *  Created on: 26 déc. 2017
 *      Author: mehdi
 */

#include "interrupt.h"
#include "stm32l4xx_hal.h"
#include "stm32l4xx.h"
#include "stm32l4xx_it.h"

/**
  * @brief  EXTI line detection callback.
  * @param  GPIO_Pin: Specifies the port pin connected to corresponding EXTI line.
  * @retval None
  */
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin) {
	/* Prevent unused argument(s) compilation warning */
	if (GPIO_Pin == PUSHBUTTON_Pin) {
		HAL_GPIO_TogglePin(LED2_GPIO_Port, LED2_Pin);
	}

	/* NOTE: This function should not be modified, when the callback is needed,
	 the HAL_GPIO_EXTI_Callback could be implemented in the user file
	 */
}

