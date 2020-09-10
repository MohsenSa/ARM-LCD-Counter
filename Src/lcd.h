#ifndef _LCD_H
#define _LCD_H

#include "stm32f1xx_hal.h"
#define DATA_PORT  GPIOA
#define CTRL_PORT  GPIOB
#define D0_PIN_Start  2
#define RS_PIN  0
//#define RW_PIN  8
#define EN_PIN   1


void lcd_init(void);
void lcd_clear(void);
void lcd_gotoxy(unsigned char x, unsigned char y);
void lcd_puts(char *str);

#endif
