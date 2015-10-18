/*
 * lcd.c
 *
 *  Created on: Oct 17, 2015
 *      Author: burneykb
 */

#include <xdc/runtime/Error.h>
#include <ti/sysbios/knl/Clock.h>
#include <string.h>
#include <ti/drivers/GPIO.h>
#include "Board.h"
#include "lcd.h"

void LCD_update(UArg foo);

enum LCD_REGISTER
{
	LCD_CONTROL = 0,
	LCD_DATA = 1
};

volatile struct LCD_DATA_BUFFERS
{
	char buffer[2][16];
	unsigned char has_changed;
}lcd_data_buffers;

volatile struct LCD_DATA
{
	Clock_Params update_params;
	Clock_Handle update_handle;
}lcd_data;

int LCD_init(unsigned int update_frequency, Error_Block * eb)
{
	// initialize registers
	// Set to 8 bit mode
	LCD_send(LCD_CONTROL, 0x38);
	// Turn LCD on
	LCD_send(LCD_CONTROL, 0x0C);
	// Clear display
	LCD_send(LCD_CONTROL, 0x01);
	// Entry set mode
	LCD_send(LCD_CONTROL, 0x06);
	// Cursor display shift
	LCD_send(LCD_CONTROL, 0x14);
	// Set DDRAM address
	LCD_send(LCD_CONTROL, 0x80);

	// create update thread
	Clock_Params_init(&lcd_data.update_params);
	lcd_data.update_params.period = update_frequency;
	lcd_data.update_params.startFlag = TRUE;
	lcd_data.update_handle = Clock_create(LCD_update, update_frequency, &lcd_data.update_params, eb);
	if(lcd_data.update_handle == 0)
	{
		return -1;
	}
	return 0;
}

void LCD_print(unsigned char row, const char * string)
{
	// lock
	strncpy(lcd_data_buffers.buffer[row], string, 16);
	lcd_data_buffers.has_changed = 1;
	// unlock
}

void LCD_setCursorLocation(unsigned char row, unsigned char column)
{
	unsigned char command = 0x80;
	command += row == 1 ? 0x40 : 0x00;
	command += column;
	LCD_send(LCD_CONTROL, command);
}

void LCD_update(UArg foo)
{
	unsigned int row, i;
	// lock
	if(!lcd_data_buffers.has_changed)
	{
		// unlock
		return;
	}

	for(row = 0; row < 2; row++)
	{
		// set address to the correct row
		LCD_setCursorLocation(row, 0);

		for(i=0;lcd_data_buffers.buffer[row][i] && i<16;i++)
		{
			LCD_send(LCD_DATA, lcd_data_buffers.buffer[row][i]); // send data
		}
		for(;i<16;i++)
		{
			LCD_send(LCD_DATA, ' '); // fill rest of row with ' '
		}
	}

	// unlock
}

void LCD_send(enum LCD_REGISTER rs, unsigned char data)
{
	volatile int i = 0;
	GPIO_write(LCD_E, 0); 					// ensure set enable low

	GPIO_write(LCD_RW, 0); 					// set direction to write
	GPIO_write(LCD_RS, rs); 				// set register bank
	GPIO_write(LCD_E, 1);					// accept data

	GPIO_write(LCD_D0, (data>>0) & 0x01);	// write data bit 0
	GPIO_write(LCD_D1, (data>>1) & 0x01);	// write data bit 1
	GPIO_write(LCD_D2, (data>>2) & 0x01);	// write data bit 2
	GPIO_write(LCD_D3, (data>>3) & 0x01);	// write data bit 3
	GPIO_write(LCD_D4, (data>>4) & 0x01);	// write data bit 4
	GPIO_write(LCD_D5, (data>>5) & 0x01);	// write data bit 5
	GPIO_write(LCD_D6, (data>>6) & 0x01);	// write data bit 6
	GPIO_write(LCD_D7, (data>>7) & 0x01);	// write data bit 7

	for(i=0;i<2000;i++);					// delay

	GPIO_write(LCD_E, 0);					// Latch in data
}

