/*
 * led_patterns.c
 *
 *  Created on: Sep 27, 2023
 *      Author: Veeresh PS
 */

/* Includes ------------------------------------------------------------------*/
#include "led_patterns.h"

/*
 * Function to ON intended Single LED.
 * Input:
 * 		GPIOx - GPIO register.
 * 		GPIO_Pin - Pin number
 */
void Led_Single_On(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin)
{
	/* turn off all the LEDs */
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, PIN_RESET);
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, PIN_RESET);
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, PIN_RESET);
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, PIN_RESET);
	/* Write the 1 (SET) to GPIO pin */
	HAL_GPIO_WritePin(GPIOx, GPIO_Pin, PIN_SET);

}

/*
 * Function to generate clockwise pattern.
 * Input:
 * 		Delay - Delay in milliseconds to indicate rotation speed.
 */
void Led_Pattern_Clockwise(uint32_t Delay)
{
	/* LED sequence for clockwise rotation : LD3 -> LD5 -> LD6 -> LD4 */
	/* Use the HAL library function to introduce delay */
	HAL_Delay(Delay);
	/* Write the 1 (SET) to GPIOD pin 13*/
	Led_Single_On(GPIOD, GPIO_PIN_13);
	HAL_Delay(Delay);
	Led_Single_On(GPIOD, GPIO_PIN_14);
	HAL_Delay(Delay);
	Led_Single_On(GPIOD, GPIO_PIN_15);
	HAL_Delay(Delay);
	Led_Single_On(GPIOD, GPIO_PIN_12);
}

/*
 * Function to generate anit-clockwise pattern.
 * Input:
 * 		Delay - Delay in milliseconds to indicate rotation speed.
 */
void Led_Pattern_Anti_Clockwise(uint32_t Delay)
{
	/* LED sequence for clockwise rotation : LD3 -> LD4 -> LD6 -> LD5 */
	/* Use the HAL library function to introduce delay */
	HAL_Delay(Delay);
	/* Use the HAL library function to toggle GPIO */
	Led_Single_On(GPIOD, GPIO_PIN_13);
	HAL_Delay(Delay);
	Led_Single_On(GPIOD, GPIO_PIN_12);
	HAL_Delay(Delay);
	Led_Single_On(GPIOD, GPIO_PIN_15);
	HAL_Delay(Delay);
	Led_Single_On(GPIOD, GPIO_PIN_14);
}

/*
 * Function to generate clockwise pattern.
 * Input:
 * 		Delay - Delay in milliseconds to indicate blinking interval.
 */
void Led_Pattern_All_Blink(uint32_t Delay)
{
	HAL_Delay(Delay);
	/* Write the 1 (SET) to GPIOD pin 13*/
	/* Use the HAL library function to toggle GPIO */
	HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_13);
	HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_14);
	HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_15);
	HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_12);
}

/*
 * Function to generate patterns according to our requirement.
 */
void Generate_LED_Patterns(void)
{

	HAL_Delay(PATTERN_DELAY_IN_MS);
	/* Pattern 1 - Clockwise rotation.*/
	Led_Pattern_Clockwise(ROTATION_DELAY_IN_MS);
	/* Pattern 2 - Anti-clockwise rotation. */
	Led_Pattern_Anti_Clockwise(ROTATION_DELAY_IN_MS);
	/* Pattern 3 - All LEDs blink simultaneously every second.*/
	Led_Pattern_All_Blink(BLINK_DELAY_IN_MS);
}
