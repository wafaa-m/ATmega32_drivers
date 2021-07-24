/*
 * ADC_INTERFACE.h
 *
 * Created: 5/30/2021 3:03:16 AM
 *  Author: Wafaa
 */ 


#ifndef ADC_INTERFACE_H_
#define ADC_INTERFACE_H_

#include "ADC_CONFIG.h"

void ADC_INIT(void);
void ADC_READ(U16* data); //using pointer to pass an address to full it

#endif /* ADC_INTERFACE_H_ */