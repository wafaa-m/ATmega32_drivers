/*
 * I2C_INTERFACE.h
 *
 * Created: 5/30/2021 5:36:06 AM
 *  Author: Wafaa
 */ 


#ifndef I2C_INTERFACE_H_
#define I2C_INTERFACE_H_

#include "I2C_CONFIG.h"

void I2C_MasterInit(void);
void I2C_SlaveInit(U8 Slave);

void I2C_StartCondition(void);
void I2C_RepeatedStartCondition(void);

void I2C_SLA_Write(U8 Slave);
void I2C_SLA_Read(U8 Slave);

void I2C_WriteData(U8 Data);
U8   I2C_ReadData(void);

void I2C_StopCondition(void);

void EEPROM_writeByte(U16 Location,U8 Data);
U8 EEPROM_ReadByte(U16 Location);


#endif /* I2C_INTERFACE_H_ */