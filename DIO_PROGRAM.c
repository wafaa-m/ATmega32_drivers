/*
 * DIO_PROGRAM.c
 *
 * Created: 5/30/2021 2:21:34 AM
 *  Author: Wafaa
 */ 

#include "DIO_INTERFACE.h"

/*Pin state*/
void DIO_SetPin_Direction(U8 port, U8 pin, U8 direction)
{
	switch (direction)
	{
		case DIO_PIN_INPUT:
		switch (port)
		{
			case DIO_PORTA:
			CLR_BIT(DDRA, pin);
			break;
			case DIO_PORTB:
			CLR_BIT(DDRB, pin);
			break;
			case DIO_PORTC:
			CLR_BIT(DDRC, pin);
			break;
			case DIO_PORTD:
			CLR_BIT(DDRD, pin);
			break;
		}
		break;
		case DIO_PIN_OUTPUT:
		switch (port)
		{
			case DIO_PORTA:
			SET_BIT(DDRA, pin);
			break;
			case DIO_PORTB:
			SET_BIT(DDRB, pin);
			break;
			case DIO_PORTC:
			SET_BIT(DDRC, pin);
			break;
			case DIO_PORTD:
			SET_BIT(DDRD, pin);
			break;
		}
		break;
	}
}
void DIO_SetPin_Value(U8 port, U8 pin, U8 status)
{
	switch (status)
	{
		case DIO_PIN_LOW:
		switch (port)
		{
			case DIO_PORTA:
			CLR_BIT(PORTA, pin);
			break;
			case DIO_PORTB:
			CLR_BIT(PORTB, pin);
			break;
			case DIO_PORTC:
			CLR_BIT(PORTC, pin);
			break;
			case DIO_PORTD:
			CLR_BIT(PORTD, pin);
			break;
		}
		break;
		case DIO_PIN_HIGH:
		switch (port)
		{
			case DIO_PORTA:
			SET_BIT(PORTA, pin);
			break;
			case DIO_PORTB:
			SET_BIT(PORTB, pin);
			break;
			case DIO_PORTC:
			SET_BIT(PORTC, pin);
			break;
			case DIO_PORTD:
			SET_BIT(PORTD, pin);
			break;
		}
		break;
	}
}
void DIO_TogglPin(U8 port, U8 pin)
{
	switch (port)
	{
		case DIO_PORTA:
		TGL_BIT(PORTA, pin);
		break;
		case DIO_PORTB:
		TGL_BIT(PORTB, pin);
		break;
		case DIO_PORTC:
		TGL_BIT(PORTC, pin);
		break;
		case DIO_PORTD:
		TGL_BIT(PORTD, pin);
		break;
	}
}
U8 DIO_ReadPin_Value(U8 port, U8 pin)
{
	U8 val = 0;
	switch (port)
	{
		case DIO_PORTA:
		val = GET_BIT(PINA, pin);
		break;
		case DIO_PORTB:
		val = GET_BIT(PINB, pin);
		break;
		case DIO_PORTC:
		val = GET_BIT(PINC, pin);
		break;
		case DIO_PORTD:
		val = GET_BIT(PIND, pin);
		break;
	}
	return val;
}

/*Port state*/
void DIO_SetPort_Direction(U8 port, U8 direction)
{
	switch(direction)
	{
		case DIO_PORT_INPUT:
		switch(port)
		{
			case DIO_PORTA:
			DDRA = DIO_PORT_INPUT;
			break;
			case DIO_PORTB:
			DDRB = DIO_PORT_INPUT;
			break;
			case DIO_PORTC:
			DDRC = DIO_PORT_INPUT;
			break;
			case DIO_PORTD:
			DDRD = DIO_PORT_INPUT;
			break;
		}
		break;
		case DIO_PORT_OUTPUT:
		switch(port)
		{
			case DIO_PORTA:
			DDRA = DIO_PORT_OUTPUT;
			break;
			case DIO_PORTB:
			DDRB = DIO_PORT_OUTPUT;
			break;
			case DIO_PORTC:
			DDRC = DIO_PORT_OUTPUT;
			break;
			case DIO_PORTD:
			DDRD = DIO_PORT_OUTPUT;
			break;
		}
		break;
	}
}
void DIO_SetPort_Value(U8 port, U8 status)
{
	switch(status)
	{
		case DIO_PORT_LOW:
		switch(port)
		{
			case DIO_PORTA:
			PORTA = DIO_PORT_INPUT;
			break;
			case DIO_PORTB:
			PORTB = DIO_PORT_INPUT;
			break;
			case DIO_PORTC:
			PORTC = DIO_PORT_INPUT;
			break;
			case DIO_PORTD:
			PORTD = DIO_PORT_INPUT;
			break;
		}
		break;
		case DIO_PORT_HIGH:
		switch(port)
		{
			case DIO_PORTA:
			PORTA = DIO_PORT_OUTPUT;
			break;
			case DIO_PORTB:
			PORTB = DIO_PORT_OUTPUT;
			break;
			case DIO_PORTC:
			PORTC = DIO_PORT_OUTPUT;
			break;
			case DIO_PORTD:
			PORTD = DIO_PORT_OUTPUT;
			break;
		}
		break;
	}
}
void DIO_TogglPort(U8 port)
{
	switch(port)
	{
		case DIO_PORTA:
		PORTA ^= DIO_PORT_HIGH;
		break;
		case DIO_PORTB:
		PORTB ^= DIO_PORT_HIGH;
		break;
		case DIO_PORTC:
		PORTC ^= DIO_PORT_HIGH;
		break;
		case DIO_PORTD:
		PORTD ^= DIO_PORT_HIGH;
		break;
	}
}
U8 DIO_ReadPort_Value(U8 port)
{
	U8 val = 0;
	switch(port)
	{
		case DIO_PORTA:
		val = PINA;
		break;
		case DIO_PORTB:
		val = PINB;
		break;
		case DIO_PORTC:
		val = PINC;
		break;
		case DIO_PORTD:
		val = PIND;
		break;
	}
	return val;
}

//ACTIVATE INTERNAL PULL-UP RESISTOR
void DIO_SETPULLUP (U8 port, U8 pin)
{
	switch(port)
	{
		case DIO_PORTA:
		SET_BIT(PORTA,pin);
		break;
		case DIO_PORTB:
		SET_BIT(PORTB,pin);
		break;
		case DIO_PORTC:
		SET_BIT(PORTC,pin);
		break;
		case DIO_PORTD:
		SET_BIT(PORTD,pin);
		break;
	}
}
