/*
 * switch_read_led_write.h
 *
 *  Created on: Sep 13, 2023
 *      Author: Veeresh PS
 */

#ifndef INC_SWITCH_READ_LED_WRITE_
#define INC_SWITCH_READ_LED_WRITE_


/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/**
  * @brief  GPIO Bit SET and Bit RESET enumeration
  */
typedef enum
{
  PIN_RESET = 0,
  PIN_SET
}PinState;

/*
 * Function to Read from GPIOA PIN 0 and Write to GPIOD PIN 12.
 */
void Read_GPIOA_PIN_0_Write_GPIOD_PIN_12(void);


#endif /* INC_SWITCH_READ_LED_WRITE_ */
