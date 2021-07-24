/*
 * MOTOR_PROGRAM.c
 *
 * Created: 5/30/2021 3:56:30 AM
 *  Author: Wafaa
 */ 

#include "MOTOR_INTERFACE.h"

void MOTOR1_INIT(void)
{
	DIO_SetPin_Direction(MOTOR_CTRL_PORT,MOTOR_EN1,MOTOR_OUTPUT);
	DIO_SetPin_Direction(MOTOR_DATA_PORT,MOTOR1_A1,MOTOR_OUTPUT);
	DIO_SetPin_Direction(MOTOR_DATA_PORT,MOTOR1_A2,MOTOR_OUTPUT);
}
void MOTOR1_ENABLE(void)
{
	DIO_SetPin_Value(MOTOR_CTRL_PORT,MOTOR_EN1,MOTOR_HIGH);
}
void MOTOR1_DISABLE(void)
{
	DIO_SetPin_Value(MOTOR_CTRL_PORT,MOTOR_EN1,MOTOR_LOW);
}
void MOTOR1_CW(void)
{
	DIO_SetPin_Value(MOTOR_DATA_PORT,MOTOR1_A1,MOTOR_LOW);
	DIO_SetPin_Value(MOTOR_DATA_PORT,MOTOR1_A2,MOTOR_HIGH);
}
void MOTOR1_CCW(void)
{
	DIO_SetPin_Value(MOTOR_DATA_PORT,MOTOR1_A1,MOTOR_HIGH);
	DIO_SetPin_Value(MOTOR_DATA_PORT,MOTOR1_A2,MOTOR_LOW);
}