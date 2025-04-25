/*
 * led.h
 *
 *  Created on: Apr 11, 2025
 *      Author: vermilion9312
 */

#ifndef INC_LED_H_
#define INC_LED_H_

#include "main.h"
#include "gpio_config.h"

typedef enum {
	LEFT_RED,
	LEFT_GREEN,
	LEFT_BLUE,
	RIGHT_RED,
	RIGHT_GREEN,
	RIGHT_BLUE,
	LED_COUNT
} LED_Index;

void turn_on_led(LED_Index index);
void turn_off_led(LED_Index index);

#endif /* INC_LED_H_ */
