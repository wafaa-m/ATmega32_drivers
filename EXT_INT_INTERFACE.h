/*
 * EXT_INT_INTERFACE.h
 *
 * Created: 5/30/2021 3:22:44 AM
 *  Author: Wafaa
 */ 


#ifndef EXT_INT_INTERFACE_H_
#define EXT_INT_INTERFACE_H_

#include "EXT_INT_CONFIG.h"

void GLOB_INTERRUPT_ENABLE(void);
void GLOB_INTERRUPT_DE(void);

void EXTERNAL_INTERRUPT0_INIT(void);
void EXTERNAL_INTERRUPT1_INIT(void);
void EXTERNAL_INTERRUPT2_INIT(void);

#endif /* EXT_INT_INTERFACE_H_ */