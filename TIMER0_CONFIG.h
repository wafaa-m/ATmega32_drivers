/*
 * TIMER0_CONFIG.h
 *
 * Created: 5/30/2021 3:48:54 AM
 *  Author: Wafaa
 */ 


#ifndef TIMER0_CONFIG_H_
#define TIMER0_CONFIG_H_

#include "CPU_CONFIGRATIONS.h"

#define NORMAL_MODE            0
#define PHASE_CORRECT_PWM      1
#define CTC_MODE               2
#define FAST_PWM               3

#define INVERTING_MODE         0
#define NON_INVERTING_MODE     1

#define NO_CLK                 0
#define CLK_8                  1
#define CLK_64                 2
#define CLK_256                3
#define CLK_1024               4

#define WAVE_GENERATION_MODE   NORMAL_MODE
#define TIMER0_PRESCALAR       CLK_1024
#define PWM_MODE               NON_INVERTING_MODE

#endif /* TIMER0_CONFIG_H_ */