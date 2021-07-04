/*
 * DIO_INTERFACE.h
 *
 * Created: 5/30/2021 2:21:15 AM
 *  Author: Wafaa
 */ 


#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_
#include "DIO_COFIG.h"

/*Pin state*/
void DIO_SetPin_Direction(U8 port, U8 pin, U8 direction);
void DIO_SetPin_Value(U8 port, U8 pin, U8 status);
void DIO_TogglPin(U8 port, U8 pin);
U8 DIO_ReadPin_Value(U8 port, U8 pin);

/*Port state*/
void DIO_SetPort_Direction(U8 port, U8 direction);
void DIO_SetPort_Value(U8 port, U8 status);
void DIO_TogglPort(U8 port);
U8 DIO_ReadPort_Value(U8 port);
/**/

//ACTIVATE INTERNAL PULLUP RESISTOR
void DIO_SETPULLUP (U8 port, U8 pin);

#endif /* DIO_INTERFACE_H_ */