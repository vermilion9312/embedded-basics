/*
 * lcd.h
 *
 *  Created on: Apr 15, 2025
 *      Author: vermilion9312
 */

#ifndef INC_LCD_H_
#define INC_LCD_H_

#include <stdio.h>
#include <stdarg.h>
#include "CLCD.h"

#define LINE_LENGTH 16

void operate_lcd_top(const char *format, ...);
void operate_lcd_bottom(const char *format, ...);

#endif /* INC_LCD_H_ */
