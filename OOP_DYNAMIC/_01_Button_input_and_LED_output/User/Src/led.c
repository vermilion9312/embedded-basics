/*
 * led.c
 *
 *  Created on: Apr 11, 2025
 *      Author: vermilion9312
 */


#include "led.h"

static void turn_on(LED* this)
{
	HAL_GPIO_WritePin(this->gpio_config.GPIOx, this->gpio_config.GPIO_Pin, GPIO_PIN_RESET);
}

static void turn_off(LED* this)
{
	HAL_GPIO_WritePin(this->gpio_config.GPIOx, this->gpio_config.GPIO_Pin, GPIO_PIN_SET);
}

LED* new_LED(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin)
{
	LED* this = malloc(sizeof(LED));
	if (!this) return NULL;

	this->gpio_config.GPIOx    = GPIOx;
	this->gpio_config.GPIO_Pin = GPIO_Pin;
	this->turn_on = turn_on;
	this->turn_off = turn_off;

	return this;
}
