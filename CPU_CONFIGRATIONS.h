/*
 * CPU_CONFIGRATIONS.h
 *
 * Created: 5/30/2021 2:20:23 AM
 *  Author: Wafaa
 */ 


#ifndef CPU_CONFIGRATIONS_H_
#define CPU_CONFIGRATIONS_H_

#undef F_CPU /* stop the internal oscillator*/
#define F_CPU 16000000 /*defining the external oscillator*/

#include <avr/io.h> /*predefined library defined input and output*/
#include <util/delay.h> /*predefined library defined delay function*/
#include <avr/interrupt.h> /*predefined library defined interrupts vectors*/
#include <stdlib.h>

#include "BIT_MATH.h" /* user defined library bit functions*/
#include "STD_TYPES.h" /* user defined library standard types*/
#include "DIO_INTERFACE.h"

#endif /* CPU_CONFIGRATIONS_H_ */