/*
 * KEY_PAD_INTERFACE.h
 *
 * Created: 5/30/2021 3:06:54 AM
 *  Author: Wafaa
 */ 


#ifndef KEY_PAD_INTERFACE_H_
#define KEY_PAD_INTERFACE_H_

#include "KEY_PAD_CONFIG.h"

void KEYPAD_INIT(void);
U8 KEYPAD_READ(void);

typedef enum
{
	PRESSED ,
	NOT_PRESSED
}BUTTON_VAL;

#endif /* KEY_PAD_INTERFACE_H_ */