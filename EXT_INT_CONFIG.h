/*
 * EXT_INT_CONFIG.h
 *
 * Created: 5/30/2021 3:23:02 AM
 *  Author: Wafaa
 */ 


#ifndef EXT_INT_CONFIG_H_
#define EXT_INT_CONFIG_H_

#include "CPU_CONFIGRATIONS.h"

//GLOBAL INTERRUPT STATUS
/*
#define GLOB_INTERRUPT_DS           0
#define GLOB_INTERRUPT_EN           1*/

//TRIGGER OPTIONS
#define EXT_INT_TRG_LOW             0
#define EXT_INT_TRG_LOGICALCHANGE   1
#define EXT_INT_TRG_FALLING         2
#define EXT_INT_TRG_RISING          3

//STAT OF INTERRUPT
//#define GLOBAL_INTERRUPT_STATE      GLOB_INTERRUPT_EN

#define EXT_INT0_STATE              EXT_INT_TRG_FALLING
#define EXT_INT1_STATE              EXT_INT_TRG_RISING
#define EXT_INT2_STATE              EXT_INT_TRG_LOW

#endif /* EXT_INT_CONFIG_H_ */