/*
 * led.c
 *
 *  Created on: Apr 11, 2025
 *      Author: vermilion9312
 */


#include "led.h"

static GPIO_Config led_config[LED_COUNT] = {
		{ LEFT_RED_GPIO_Port,    LEFT_RED_Pin    },
		{ LEFT_GREEN_GPIO_Port,  LEFT_GREEN_Pin  },
		{ LEFT_BLUE_GPIO_Port,   LEFT_BLUE_Pin   },
		{ RIGHT_RED_GPIO_Port,   RIGHT_RED_Pin   },
		{ RIGHT_GREEN_GPIO_Port, RIGHT_GREEN_Pin },
		{ RIGHT_BLUE_GPIO_Port,  RIGHT_BLUE_Pin  },
};

void turn_on_led(LED_Index index)
{
	HAL_GPIO_WritePin(led_config[index].GPIOx, led_config[index].GPIO_Pin, GPIO_PIN_RESET);
}

void turn_off_led(LED_Index index)
{
	HAL_GPIO_WritePin(led_config[index].GPIOx, led_config[index].GPIO_Pin, GPIO_PIN_SET);
}
