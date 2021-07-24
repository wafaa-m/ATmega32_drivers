/*
 * SEVEN_SEG_INTERFACE.h
 *
 * Created: 5/30/2021 2:40:49 AM
 *  Author: Wafaa
 */ 


#ifndef SEVEN_SEG_INTERFACE_H_
#define SEVEN_SEG_INTERFACE_H_

#include "SEVEN_SEG_CONFIG.h"
#include "STD_TYPES.h"

void SEV_SEG_INIT(void);

void SEV_SEG_EN1(void);
void SEV_SEG_DE1(void);

void SEV_SEG_EN2(void);
void SEV_SEG_DE2(void);

void SEV_SEG_Display (U8 data);


void SEV_SEG_Display1(U8 data1);
void SEV_SEG_Display2(U8 data2);

void SEV_SEG_COUNTER(U8 datac);

#endif /* SEVEN_SEG_INTERFACE_H_ */