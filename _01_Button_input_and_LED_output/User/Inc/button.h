/*
 * button.h
 *
 *  Created on: Apr 11, 2025
 *      Author: vermilion9312
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include <stdbool.h>
#include "main.h"
#include "gpio_config.h"

typedef enum {
	BUTTON_1,
	BUTTON_2,
	BUTTON_3,
	BUTTON_4,
	BUTTON_COUNT
} ButtonIndex;

bool is_button_pressed(ButtonIndex index);

#endif /* INC_BUTTON_H_ */
