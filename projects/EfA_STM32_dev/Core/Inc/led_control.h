/*
 * led_control.h
 *
 *  Created on: Sep 2, 2023
 *      Author: Veeresh PS
 */

#ifndef INC_LED_CONTROL_H_
#define INC_LED_CONTROL_H_

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/*      MACRO_NAME  value */
#define DELAY_IN_MS 1000

/*
 * Function to toggle GPIO pin 12.
 * Input:
 * 		Delay - Delay in milliseconds
 */
void Led_Toggle_GPIO_PIN_12(uint32_t Delay);

#endif /* INC_LED_CONTROL_H_ */
