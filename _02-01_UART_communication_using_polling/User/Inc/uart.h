/*
 * uart.h
 *
 *  Created on: Apr 13, 2025
 *      Author: vermilion9312
 */

#ifndef INC_UART_H_
#define INC_UART_H_

#include <stdint.h>
#include "main.h"

void transmit_data(void);
HAL_StatusTypeDef receive_data(void);

#endif /* INC_UART_H_ */
