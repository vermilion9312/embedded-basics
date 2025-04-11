/*
 * button.c
 *
 *  Created on: Apr 11, 2025
 *      Author: vermilion9312
 */


#include "button.h"

static bool is_pressed(Button* this)
{
	return HAL_GPIO_ReadPin(this->gpio_config.GPIOx, this->gpio_config.GPIO_Pin);
}

Button* new_Button(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin)
{
	Button* this = malloc(sizeof(Button));
	if (!this) return NULL;

	this->gpio_config.GPIOx = GPIOx;
	this->gpio_config.GPIO_Pin = GPIO_Pin;
	this->is_pressed = is_pressed;

	return this;
}
