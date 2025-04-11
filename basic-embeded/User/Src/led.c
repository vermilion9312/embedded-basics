/*
 * led.c
 *
 *  Created on: Apr 11, 2025
 *      Author: vermilion9312
 */


#include "led.h"

void turn_on_led(void)
{
	HAL_GPIO_WritePin(RIGHT_BLUE_GPIO_Port, RIGHT_BLUE_Pin, GPIO_PIN_RESET);
}

void turn_off_led(void)
{
	HAL_GPIO_WritePin(RIGHT_BLUE_GPIO_Port, RIGHT_BLUE_Pin, GPIO_PIN_SET);
}
