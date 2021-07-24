/*
 * ADC_PROGRAM.c
 *
 * Created: 5/30/2021 3:03:01 AM
 *  Author: Wafaa
 */ 
#include "ADC_INTERFACE.h"

void ADC_INIT(void)
{
	//AVCC with external capacitor at AREF pin BIT 6,7 
	CLR_BIT(ADMUX,REFS1);
	SET_BIT(ADMUX,REFS0);
	
	//ADLAR: ADC Left Adjust Result BIT5
	CLR_BIT(ADMUX,ADLAR);
	
	//Input Channel ADC1 00001
	CLR_BIT(ADMUX,MUX4);
	CLR_BIT(ADMUX,MUX3);
	CLR_BIT(ADMUX,MUX2);
	CLR_BIT(ADMUX,MUX1);
	SET_BIT(ADMUX,MUX0);
	
	//following three lines the same function of previos
	/*
	ADMUX=0b01000001;
	ADMUX=0x41;
	ADMUX |=(1<<REFS0) |(1<<MUX0);*/
	
	//ADEN: ADC Enable 
	SET_BIT(ADCSRA, ADATE);
	
	//ADATE: ADC Auto Trigger Enable
	SET_BIT(ADCSRA, ADEN);
	
	//ADIF: ADC Interrupt Flag WORKS AUTOMATICLLY
	
	//prescaler SELECT BIT TO divide over 128
	SET_BIT(ADCSRA,ADPS0);
	SET_BIT(ADCSRA,ADPS1);
	SET_BIT(ADCSRA,ADPS2);
}

void ADC_READ(U16* data)
{
	U16 var=0;
	SET_BIT(ADCSRA,ADSC);
	while(GET_BIT(ADCSRA,ADIF)!=1);
	var=ADC;
	*data=var; //REFRECING THE DATA PUT THE VALUE IN THE SELECTED ADDRESS
}
