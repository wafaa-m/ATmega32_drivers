/*
 * I2C_PROGRAM.c
 *
 * Created: 5/30/2021 5:35:44 AM
 *  Author: Wafaa
 */ 

#include "I2C_INTERFACE.h"

void I2C_MasterInit(void)
{
	//clock speed
	TWBR =0;
	//Enable I2C
	SET_BIT(TWCR,2);
}

void I2C_SlaveInit(U8 Slave)
{
	TWAR =  ( Slave<<1 );
	//clock speed
	TWBR =0;
	//Enable I2C
	SET_BIT(TWCR,2);
}

void I2C_StartCondition(void)
{
	//set start condition bit
	SET_BIT(TWCR,5);
	//1-  Enable I2C         
	SET_BIT(TWCR,2);
	//2-  set flag           
	SET_BIT(TWCR,7);
	//3-  wait until flag=1 (operation finished)
	while(GET_BIT(TWCR,7)==0);
	//check the operation completed 
	while( (TWSR&0xF8) != START_CONDITION );
}

void I2C_RepeatedStartCondition(void)
{
	//set start condition bit
	SET_BIT(TWCR,5);
	//1-  Enable I2C         
	SET_BIT(TWCR,2);
	//2-  set flag           
	SET_BIT(TWCR,7);
	//3-  wait until flag=1 (operation finished)
	while(GET_BIT(TWCR,7)==0);
	//check the operation completed
	while( (TWSR&0xF8) != REPEATED_START );
}

void I2C_SLA_Write(U8 Slave)
{
	//Clear start condition bit
	CLR_BIT(TWCR,5);
	//Assign  Slave
	TWDR = (Slave<<1) ;
	// write         
	CLR_BIT(TWBR,0);
	//1-  Enable I2C
	SET_BIT(TWCR,2);
	//2-  set flag  
	SET_BIT(TWCR,7);
	//3-  wait until flag=1 (operation finished)
	while(GET_BIT(TWCR,7)==0);
	//check the operation completed
	while( (TWSR&0xF8) != SLAVE_ADD_WITH_WRITE  );
}

void I2C_SLA_Read(U8 Slave)
{
	//Clear start condition bit
	CLR_BIT(TWCR,5);
	//Assign  Slave 
	TWDR = (Slave<<1) ;
	//Read          
	SET_BIT(TWBR,0);
	//1-  Enable I2C
	SET_BIT(TWCR,2);
	//2-  set flag  
	SET_BIT(TWCR,7);
	//3-  wait until flag=1 (operation finished)
	while(GET_BIT(TWCR,7)==0);
	//check the operation completed
	while( (TWSR&0xF8) != SLAVE_ADD_WITH_READ );
}

void I2C_WriteData(U8 Data)
{
	//send data     
	TWDR = Data ;
	//1-  Enable I2C
	SET_BIT(TWCR,2);
	//2-  set flag
	SET_BIT(TWCR,7);
	//3-  wait until flag=1 (operation finished)
	while(GET_BIT(TWCR,7)==0);
	//check the operation completed
	while( (TWSR&0xF8) != WRITE_DATA );
}

U8 I2C_ReadData(void)
{
	//1-  Enable I2C
	SET_BIT(TWCR,2);
	//2-  set flag
	SET_BIT(TWCR,7);
	//3-  wait until flag=1 (operation finished)
	while(GET_BIT(TWCR,7)==0);
	//check the operation completed
	while( (TWSR&0xF8) != READ_DATA );
	return TWDR;
}

void I2C_StopCondition(void)
{
	//Stop Condition BiT
	SET_BIT(TWCR,4);
	//1-  Enable I2C
	SET_BIT(TWCR,2);
	//2-  set flag
	SET_BIT(TWCR,7);
}

//EEPROM

void EEPROM_Init(void)
{
	I2C_MasterInit();
}

void EEPROM_writeByte(U16 Location,U8 Data)
{
	I2C_StartCondition();
	I2C_SLA_Write(0b10100000);
	I2C_WriteData((U8)Location);
	I2C_WriteData(Data);
	I2C_StopCondition();
}

U8 EEPROM_ReadByte(U16 Location)
{
	I2C_StartCondition();
	I2C_SLA_Write(0b10100000);
	I2C_WriteData((U8)Location);
	I2C_RepeatedStartCondition();
	I2C_SLA_Write(0b10100000);
	U8 Data = I2C_ReadData();
	I2C_StopCondition();
	return Data;
}