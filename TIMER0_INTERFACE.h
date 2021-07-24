/*
 * TIMER0_INTERFACE.h
 *
 * Created: 5/30/2021 3:48:34 AM
 *  Author: Wafaa
 */ 


#ifndef TIMER0_INTERFACE_H_
#define TIMER0_INTERFACE_H_

#include "TIMER0_CONFIG.h"

//function for timer 0 with normal mode
void TIMER0_OVF_INIT(void);
void TIMER0_OVF_START(U16 prescaler);
void TIMER0_OVF_STOP(void);
void TIMER0_OVF_SET_DELAY(U32 delay);

//function for timer 0 with CTC mode
void TIMER0_CTC_INIT(void);
void TIMER0_CTC_START(U16 prescaler);
void TIMER0_CTC_STOP(void);
void TIMER0_CTC_SET_DELAY ( U32 delay, U8 ocr);

//motor

void TIMER0_FASTPWM_INIT(void);
void TIMER0_FASTPWM_START(void);
void TIMER0_FASTPWM_SETDUTY(U8 dutycycle);

#endif /* TIMER0_INTERFACE_H_ */