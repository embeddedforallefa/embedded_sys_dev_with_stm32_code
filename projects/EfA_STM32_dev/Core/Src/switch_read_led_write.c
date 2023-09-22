/*
 * switch_read_led_write_debounce.c
 *
 *  Created on: Sep , 2023
 *      Author: Veerehs PS
 */

#include "switch_read_led_write.h"

/*
 * Function to Read from GPIOA PIN 0 and Write to GPIOD PIN 12.
 */
//void Read_GPIOA_PIN_0_Write_GPIOD_PIN_12(void)
//{
//	/* declare a variable to store the GPIO pin status*/
//	uint32_t status;
//	/*
//	 * Read the pin status of GPIO port A and Pin 0
//	 * and store the same in status variable.
//	 */
//	status = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0);
//
//	/*
//	 * Check if pin status is SET or REST
//	 */
//	if(status == PIN_SET)
//	{
//		/* Write the 1 (SET) to GPIOD pin 12*/
//		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, PIN_SET);
//	}
//	else
//	{
//		/* Write the 0 (RESET) to GPIOD pin 12*/
//		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, PIN_RESET);
//	}
//}



