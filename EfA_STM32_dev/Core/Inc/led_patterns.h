/*
 * led_patterns.h
 *
 *  Created on: Sep 27, 2023
 *      Author: Veeresh PS
 */

#ifndef INC_LED_PATTERNS_H_
#define INC_LED_PATTERNS_H_

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/*      MACRO_NAME  value */
#define ROTATION_DELAY_IN_MS 100
#define BLINK_DELAY_IN_MS 500
#define PATTERN_DELAY_IN_MS 2000

/**
  * @brief  GPIO Bit SET and Bit RESET enumeration
  */
typedef enum
{
  PIN_RESET = 0,
  PIN_SET
}PinState;

/*
 * Function to ON intended Single LED.
 * Input:
 * 		GPIOx - GPIO register.
 * 		GPIO_Pin - Pin number
 */
void Led_Single_On(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);

/*
 * Function to generate clockwise pattern.
 * Input:
 * 		Delay - Delay in milliseconds to indicate rotation speed.
 */
void Led_Pattern_Clockwise(uint32_t Delay);

/*
 * Function to generate anit-clockwise pattern.
 * Input:
 * 		Delay - Delay in milliseconds to indicate rotation speed.
 */
void Led_Pattern_Anti_Clockwise(uint32_t Delay);

/*
 * Function to generate clockwise pattern.
 * Input:
 * 		Delay - Delay in milliseconds to indicate blinking interval.
 */
void Led_Pattern_All_Blink(uint32_t Delay);

/*
 * Function to generate patterns according to requirement.
 */
void Generate_LED_Patterns(void);

#endif /* INC_LED_PATTERNS_H_ */
