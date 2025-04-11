/*
 * led.h
 *
 *  Created on: Apr 11, 2025
 *      Author: vermilion9312
 */

#ifndef INC_LED_H_
#define INC_LED_H_

#include <stdlib.h>
#include "main.h"
#include "gpio_config.h"

typedef struct _LED LED;

struct _LED {
	GPIO_Config gpio_config;
	void (* turn_on)(LED*);
	void (* turn_off)(LED*);
};

LED* new_LED(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);

#endif /* INC_LED_H_ */
