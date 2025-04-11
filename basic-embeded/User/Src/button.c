/*
 * button.c
 *
 *  Created on: Apr 11, 2025
 *      Author: vermilion9312
 */


#include "button.h"

bool is_button_pressed(void)
{
	return HAL_GPIO_ReadPin(BUTTON_1_GPIO_Port, BUTTON_1_Pin);
}
