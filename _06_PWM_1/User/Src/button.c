/*
 * button.c
 *
 *  Created on: Apr 11, 2025
 *      Author: vermilion9312
 */


#include "button.h"

static GPIO_Config button_config[BUTTON_COUNT] = {
		{ BUTTON_1_GPIO_Port, BUTTON_1_Pin },
		{ BUTTON_2_GPIO_Port, BUTTON_2_Pin },
		{ BUTTON_3_GPIO_Port, BUTTON_3_Pin },
		{ BUTTON_4_GPIO_Port, BUTTON_4_Pin }
};

bool is_button_pressed(ButtonIndex index)
{
	return HAL_GPIO_ReadPin(button_config[index].GPIOx, button_config[index].GPIO_Pin);
}
