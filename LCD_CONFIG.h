/*
 * LCD_CONFIG.h
 *
 * Created: 5/30/2021 2:47:56 AM
 *  Author: Wafaa
 */ 


#ifndef LCD_CONFIG_H_
#define LCD_CONFIG_H_
#include "CPU_CONFIGRATIONS.h"

#define LCD_CNTROL_PORT  DIO_PORTB
#define LCD_DATA_PORT    DIO_PORTA

#define LCD_4BIT_MODE 0
#define LCD_8BIT_MODE 1

#define LCD_RS           DIO_PIN1
#define LCD_RW           DIO_PIN2
#define LCD_E            DIO_PIN3

#define LCD_DATA0        DIO_PIN0
#define LCD_DATA1        DIO_PIN1
#define LCD_DATA2        DIO_PIN2
#define LCD_DATA3        DIO_PIN3
#define LCD_DATA4        DIO_PIN4
#define LCD_DATA5        DIO_PIN5
#define LCD_DATA6        DIO_PIN6
#define LCD_DATA7        DIO_PIN7

#define LCD_MODE         LCD_4BIT_MODE
#define LCD_LOW          DIO_PIN_LOW
#define LCD_HIGH         DIO_PIN_HIGH
#define LCD_OUTPUT       DIO_PIN_OUTPUT









#endif /* LCD_CONFIG_H_ */