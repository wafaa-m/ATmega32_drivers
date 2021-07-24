/*
 * SEVEN_SEG_CONFIG.h
 *
 * Created: 5/30/2021 2:40:32 AM
 *  Author: Wafaa
 */ 


#ifndef SEVEN_SEG_CONFIG_H_
#define SEVEN_SEG_CONFIG_H_

#include "CPU_CONFIGRATIONS.h"

#define SEVENSEG_CNTRL_PORT       DIO_PORTB
#define SEVENSEG_DATA_PORT        DIO_PORTA

#define SEVENSEG_ENABLE1          DIO_PIN1
#define SEVENSEG_ENABLE2          DIO_PIN2

#define SEVENSEG_DATA_A           DIO_PIN4
#define SEVENSEG_DATA_B           DIO_PIN5
#define SEVENSEG_DATA_C           DIO_PIN6
#define SEVENSEG_DATA_D           DIO_PIN7

#define SEVENSEG_OUTPUT           DIO_PIN_OUTPUT
#define SEVENSEG_HIGH             DIO_PIN_HIGH
#define SEVENSEG_LOW              DIO_PIN_LOW

#endif /* SEVEN_SEG_CONFIG_H_ */