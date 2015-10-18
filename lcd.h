/*
 * lcd.h
 *
 *  Created on: Oct 17, 2015
 *      Author: burneykb
 */

#ifndef LCD_H
#define LCD_H
#include <xdc/runtime/Error.h>
#define LCD_RS 4
#define LCD_RW 5
#define LCD_E 6
#define LCD_DB0 11
#define LCD_DB1 12
#define LCD_DB2 13
#define LCD_DB3 14
#define LCD_DB4 7
#define LCD_DB5 8
#define LCD_DB6 9
#define LCD_DB7 10


volatile char buff1[17];
volatile char buff2[17];

void LCD_send(unsigned char RS, unsigned char data);


int LCD_init(unsigned int update_frequency, Error_Block * eb);
void LCD_print(unsigned char row, const char * string);

#endif /* LCD_H_ */
