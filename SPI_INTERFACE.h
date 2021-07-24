/*
 * SPI_INTERFACE.h
 *
 * Created: 5/30/2021 4:32:50 AM
 *  Author: Wafaa
 */ 


#ifndef SPI_INTERFACE_H_
#define SPI_INTERFACE_H_

#include "SPI_CONFIG.h"

void SPI_INIT(void);
void SPI_MASTER_Init(void);
void SPI_SLAVE_INIT(void);

void SPI_Transmit(U8 data);
U8 SPI_Receive(void);

void SPI_SlaveSelect(U8 slave);

SPI_STATUS SPI_TRANRECEIVE(U8 datasent, U8* datareceived);

#endif /* SPI_INTERFACE_H_ */