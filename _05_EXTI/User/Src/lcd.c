/*
 * lcd.c
 *
 *  Created on: Apr 15, 2025
 *      Author: vermilion9312
 */


#include "lcd.h"

void operate_lcd_top(const char *format, ...)
{
	static unsigned char buffer[LINE_LENGTH];
    va_list args;

    va_start(args, format);
    vsprintf(buffer, format, args);
    va_end(args);

    CLCD_Clear();
    CLCD_Puts(0, 0, buffer);
}

void operate_lcd_bottom(const char *format, ...)
{
	static unsigned char buffer[LINE_LENGTH];
    va_list args;

    va_start(args, format);
    vsprintf(buffer, format, args);
    va_end(args);

    CLCD_Clear();
    CLCD_Puts(0, 1, buffer);
}
