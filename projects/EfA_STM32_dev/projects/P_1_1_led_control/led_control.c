/*
 * led_control.c
 *
 *  Created on: Sep 2, 2023
 *      Author: Veerehs PS
 */

#include <led_control.h>

void Led_Toggle_GPIO_PIN_12(uint32_t Delay)
{
	/* Use the HAL library function to introduce delay */
	HAL_Delay(Delay);
	/* Use the HAL library function to toggle GPIO */
	HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_12);
}

