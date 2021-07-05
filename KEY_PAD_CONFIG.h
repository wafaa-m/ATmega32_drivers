/*
 * KEY_PAD_CONFIG.h
 *
 * Created: 5/30/2021 3:07:11 AM
 *  Author: Wafaa
 */ 


#ifndef KEY_PAD_CONFIG_H_
#define KEY_PAD_CONFIG_H_

#include "CPU_CONFIGRATIONS.h"

#define KEYPAD_PORT            DIO_PORTC

#define KEYPAD_PIN_OUTPUT0     DIO_PIN0
#define KEYPAD_PIN_OUTPUT1     DIO_PIN1
#define KEYPAD_PIN_OUTPUT2     DIO_PIN2
#define KEYPAD_PIN_OUTPUT3     DIO_PIN3

#define KEYPAD_PIN_INPUT0     DIO_PIN4
#define KEYPAD_PIN_INPUT1     DIO_PIN5
#define KEYPAD_PIN_INPUT2     DIO_PIN6
#define KEYPAD_PIN_INPUT3     DIO_PIN7

#define KEYPAD_INPUT          DIO_PIN_INPUT
#define KEYPAD_OUTPUT         DIO_PIN_OUTPUT

#define KEYPAD_HIGH          DIO_PIN_HIGH
#define KEYPAD_LOW           DIO_PIN_LOW

#define KEYPAD_COL_INIT     0
#define KEYPAD_COL_END      3

#define KEYPAD_ROW_INIT    4
#define KEYPAD_ROW_END     7

#define KEYPAD_PRESSED     0


#endif /* KEY_PAD_CONFIG_H_ */