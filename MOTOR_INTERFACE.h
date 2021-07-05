/*
 * MOTOR_INTERFACE.h
 *
 * Created: 5/30/2021 4:00:17 AM
 *  Author: Wafaa
 */ 


#ifndef MOTOR_INTERFACE_H_
#define MOTOR_INTERFACE_H_

#include "MOTOR_CONFIG.h"

void MOTOR1_INIT(void);
void MOTOR1_ENABLE(void);
void MOTOR1_DISABLE(void);
void MOTOR1_CW(void);
void MOTOR1_CCW(void);

#endif /* MOTOR_INTERFACE_H_ */