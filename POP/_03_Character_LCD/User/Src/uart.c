/*
 * uart.c
 *
 *  Created on: Apr 13, 2025
 *      Author: vermilion9312
 */


#include "uart.h"

static uint8_t data;

void transmit_data(void)
{
	HAL_UART_Transmit(&huart3, &data, sizeof(data), 10);
}

HAL_StatusTypeDef receive_data(void)
{
	return HAL_UART_Receive_IT(&huart3, &data, sizeof(data));
}
