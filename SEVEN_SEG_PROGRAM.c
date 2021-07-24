/*
 * SEVEN_SEG_PROGRAM.c
 *
 * Created: 5/30/2021 2:40:12 AM
 *  Author: Wafaa
 */ 

#include "SEVEN_SEG_INTERFACE.h"

void SEV_SEG_INIT(void)
{
	DIO_SetPin_Direction(SEVENSEG_CNTRL_PORT, SEVENSEG_ENABLE1, SEVENSEG_OUTPUT);
	DIO_SetPin_Direction(SEVENSEG_CNTRL_PORT, SEVENSEG_ENABLE2, SEVENSEG_OUTPUT);

	DIO_SetPin_Direction(SEVENSEG_DATA_PORT, SEVENSEG_DATA_A, SEVENSEG_OUTPUT);
	DIO_SetPin_Direction(SEVENSEG_DATA_PORT, SEVENSEG_DATA_B, SEVENSEG_OUTPUT);
	DIO_SetPin_Direction(SEVENSEG_DATA_PORT, SEVENSEG_DATA_C, SEVENSEG_OUTPUT);
	DIO_SetPin_Direction(SEVENSEG_DATA_PORT, SEVENSEG_DATA_D, SEVENSEG_OUTPUT);
}


void SEV_SEG_EN1(void)
{
	DIO_SetPin_Value(SEVENSEG_CNTRL_PORT, SEVENSEG_ENABLE1, SEVENSEG_HIGH); //from DIO.c file which included in CPU configuration which includes DIO.h file
}
void SEV_SEG_DE1(void)
{
	DIO_SetPin_Value(SEVENSEG_CNTRL_PORT, SEVENSEG_ENABLE1, SEVENSEG_LOW);
}

void SEV_SEG_EN2(void)
{
	DIO_SetPin_Value(SEVENSEG_CNTRL_PORT, SEVENSEG_ENABLE2, SEVENSEG_HIGH);	
}
void SEV_SEG_DE2(void)
{
	DIO_SetPin_Value(SEVENSEG_CNTRL_PORT, SEVENSEG_ENABLE2, SEVENSEG_LOW);	
}


void SEV_SEG_Display1(U8 data1)
{
	SEV_SEG_EN1();
	PORTA = (data1<<4)|(PORTA & 0x0f); //works on last 4 bits
}
void SEV_SEG_Display2(U8 data2)
{
	SEV_SEG_EN2();
	PORTA = (data2<<4)|(PORTA & 0x0f); //works on last 4 bits
}
void SEV_SEG_COUNTER(U8 datac)
{
	U8 data0 = datac % 10;
	U8 data1 = datac / 10;
	PORTA = (data0 << 4) | (PORTA & 0x0F);
	SEV_SEG_EN1();
	SEV_SEG_DE2();
	_delay_ms(200);
	PORTA = (data1 << 4) | (PORTA & 0x0F);
	SEV_SEG_DE1();
	SEV_SEG_EN2();
	_delay_ms(50);
}