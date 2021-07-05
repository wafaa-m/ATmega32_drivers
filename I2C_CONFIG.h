/*
 * I2C_CONFIG.h
 *
 * Created: 5/30/2021 5:36:22 AM
 *  Author: Wafaa
 */ 


#ifndef I2C_CONFIG_H_
#define I2C_CONFIG_H_

#include "CPU_CONFIGRATIONS.h"

#define   START_CONDITION                       0x08
#define   REPEATED_START                        0x10
#define   SLAVE_ADD_WITH_WRITE                  0x18
#define   SLAVE_ADD_WITH_READ                   0x40
#define   WRITE_DATA                            0x28
#define   READ_DATA                             0x50

#endif /* I2C_CONFIG_H_ */