/*
 * UART_INTERFACE.h
 *
 * Created: 5/30/2021 4:28:16 AM
 *  Author: Wafaa
 */ 


#ifndef UART_INTERFACE_H_
#define UART_INTERFACE_H_

#include "UART_CONFIG.h"

void UART_Init(void);

void UART_Transmit(U8 data);
U8 UART_Receive(void);

void UART_Transmit_Str(U8* str);
U8* UART_Receive_Str(void);

#endif /* UART_INTERFACE_H_ */