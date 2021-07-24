/*
 * SPI_PROGRAM.c
 *
 * Created: 5/30/2021 4:32:32 AM
 *  Author: Wafaa
 */ 

#include "SPI_INTERFACE.h"

void SPI_INIT(void)
{
	#if SPI_MODE == MASTER
	SET_BIT(SPI_PORT, MOSI);/*Define direction as output*/
	CLR_BIT(SPI_PORT, MISO);/*Define direction as input*/
	SET_BIT(SPI_PORT, CLK);/*Define direction as output*/
	SET_BIT(SPI_PORT, SS); /*Define direction as output*/
	SPCR = 0x53;//0b 0101 0011  SPI CONTROL REGESTIR
	#elif SPI_MODE == SLAVE
	CLR_BIT(SPI_PORT, MOSI);/*Define direction as input*/
	SET_BIT(SPI_PORT, MISO);/*Define direction as output*/
	CLR_BIT(SPI_PORT, CLK);/*Define direction as input*/
	CLR_BIT(SPI_PORT, SS); /*Define direction as input*/
	SPCR = 0x43;//0b 0100 0011 SPI CONTROL REGESTIR
	#endif
}


void SPI_MASTER_Init(void)
{
	SET_BIT(SPI_PORT, MOSI);/*Define direction as output*/
	CLR_BIT(SPI_PORT, MISO);/*Define direction as input*/
	SET_BIT(SPI_PORT, CLK);/*Define direction as output*/
	SET_BIT(SPI_PORT, SS); /*Define direction as output*/
	SPCR = 0x53;//0b 0101 0011  SPI CONTROL REGESTIR
}

void SPI_SLAVE_INIT(void)
{
	CLR_BIT(SPI_PORT, MOSI);/*Define direction as input*/
	SET_BIT(SPI_PORT, MISO);/*Define direction as output*/
	CLR_BIT(SPI_PORT, CLK);/*Define direction as input*/
	CLR_BIT(SPI_PORT, SS); /*Define direction as input*/
	SPCR = 0x40;//0b 0100 0011 SPI CONTROL REGESTIR
}
void SPI_Transmit(U8 data)
{
	SPDR = data;
	while (GET_BIT(SPSR, SPIF) != 1); //FLAG THE DATA IS SEND
}
U8 SPI_Receive(void)
{
	while (GET_BIT(SPSR, SPIF) != 1); //FLAG THE DATA IS RECEIVED
	return SPDR;
}
void SPI_SlaveSelect(U8 slave)
{
	switch (slave)
	{
		case 0:
		CLR_BIT(PORTB, SS);
		break;
		case 1:
		break;
	}
}

SPI_STATUS SPI_TRANRECEIVE(U8 datasent, U8* datareceived)
{
	SPDR = datasent; // to slave
	while (GET_BIT(SPSR,SPIF) !=1);
	*datareceived = SPDR; //from slave
	return SPI_OK;
}
