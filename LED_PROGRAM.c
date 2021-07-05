/*
 * LED_PROGRAM.c
 *
 * Created: 5/30/2021 2:36:50 AM
 *  Author: Wafaa
 */ 

#include "LED_INTERFACE.h"
//LED0
void LED0_Init(void)
{
	//enable led0
	DIO_SetPin_Direction(LED0_PORT, LED0_PIN, LED0_OUTPUT);
}
void LED0_ON(void)
{
	DIO_SetPin_Value(LED0_PORT, LED0_PIN, LED0_HIGH);
}
void LED0_OFF(void)
{
	DIO_SetPin_Value(LED0_PORT, LED0_PIN, LED0_LOW);
}
void LED0_TGL(void)
{
	DIO_TogglPin (LED0_PORT,LED0_PIN);
}

//LED1
void LED1_Init(void)
{
	DIO_SetPin_Direction(LED1_PORT, LED1_PIN, LED1_OUTPUT);
}
void LED1_ON(void)
{
	DIO_SetPin_Value(LED1_PORT, LED1_PIN, LED1_HIGH);
}
void LED1_OFF(void)
{
	DIO_SetPin_Value(LED1_PORT, LED1_PIN, LED1_LOW);
}
void LED1_TGL(void)
{
	DIO_TogglPin (LED1_PORT,LED1_PIN);
}

//LED2
void LED2_Init(void)
{
	DIO_SetPin_Direction(LED2_PORT, LED2_PIN, LED2_OUTPUT);
}
void LED2_ON(void)
{
	DIO_SetPin_Value(LED2_PORT, LED2_PIN, LED2_HIGH);
}
void LED2_OFF(void)
{
	DIO_SetPin_Value(LED2_PORT, LED2_PIN, LED2_LOW);
}
void LED2_TGL(void)
{
	DIO_TogglPin (LED2_PORT,LED2_PIN);
}