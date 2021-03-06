/*
 * lcd_hw.h
 *
 *  Created on: Oct 17, 2015
 *      Author: burneykb
 */

#ifndef LCD_HW_H_
#define LCD_HW_H_

#define LCD_GPIO_CONFIG \
	GPIOMSP432_P6_0 | GPIO_CFG_OUT_STD | GPIO_CFG_OUT_STR_LOW | GPIO_CFG_OUT_LOW,  /*RS*/\
	GPIOMSP432_P3_2 | GPIO_CFG_OUT_STD | GPIO_CFG_OUT_STR_LOW | GPIO_CFG_OUT_LOW,  /*RW*/\
	GPIOMSP432_P3_3 | GPIO_CFG_OUT_STD | GPIO_CFG_OUT_STR_LOW | GPIO_CFG_OUT_LOW,  /*E*/\
	GPIOMSP432_P6_1 | GPIO_CFG_OUT_STD | GPIO_CFG_OUT_STR_LOW | GPIO_CFG_OUT_LOW,  /*D0*/\
	GPIOMSP432_P4_0 | GPIO_CFG_OUT_STD | GPIO_CFG_OUT_STR_LOW | GPIO_CFG_OUT_LOW,  /*D1*/\
	GPIOMSP432_P4_2 | GPIO_CFG_OUT_STD | GPIO_CFG_OUT_STR_LOW | GPIO_CFG_OUT_LOW,  /*D2*/\
	GPIOMSP432_P4_4 | GPIO_CFG_OUT_STD | GPIO_CFG_OUT_STR_LOW | GPIO_CFG_OUT_LOW,  /*D3*/\
	GPIOMSP432_P4_1 | GPIO_CFG_OUT_STD | GPIO_CFG_OUT_STR_LOW | GPIO_CFG_OUT_LOW,  /*D4*/\
	GPIOMSP432_P4_3 | GPIO_CFG_OUT_STD | GPIO_CFG_OUT_STR_LOW | GPIO_CFG_OUT_LOW,  /*D5*/\
	GPIOMSP432_P4_5 | GPIO_CFG_OUT_STD | GPIO_CFG_OUT_STR_LOW | GPIO_CFG_OUT_LOW,  /*D6*/\
	GPIOMSP432_P4_6 | GPIO_CFG_OUT_STD | GPIO_CFG_OUT_STR_LOW | GPIO_CFG_OUT_LOW  /*D7*/

#define LCD_GPIO_CALLBACKS \
	NULL, \
	NULL, \
	NULL, \
	NULL, \
	NULL, \
	NULL, \
	NULL, \
	NULL, \
	NULL, \
	NULL, \
	NULL, \
	NULL

#define LCD_GPIO_NAMES \
	LCD_RS, \
	LCD_RW, \
	LCD_E,  \
	LCD_D0, \
	LCD_D1, \
	LCD_D2, \
	LCD_D3, \
	LCD_D4, \
	LCD_D5, \
	LCD_D6, \
	LCD_D7

#endif /* LCD_HW_H_ */

