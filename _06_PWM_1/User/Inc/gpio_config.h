/*
 * gpio_config.h
 *
 *  Created on: Apr 11, 2025
 *      Author: vermilion9312
 */

#ifndef INC_GPIO_CONFIG_H_
#define INC_GPIO_CONFIG_H_

typedef struct _GPIO_Config GPIO_Config;

struct _GPIO_Config {
	GPIO_TypeDef* GPIOx;
	uint16_t      GPIO_Pin;
};

#endif /* INC_GPIO_CONFIG_H_ */
