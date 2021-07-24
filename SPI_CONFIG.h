/*
 * SPI_CONFIG.h
 *
 * Created: 5/30/2021 4:33:07 AM
 *  Author: Wafaa
 */ 


#ifndef SPI_CONFIG_H_
#define SPI_CONFIG_H_

#include "CPU_CONFIGRATIONS.h"

#define MASTER 1
#define SLAVE  0

#define MOSI 5
#define MISO 6
#define CLK  7
#define SS   4

#define SPI_PORT DDRB

//#define SPI_MODE SLAVE

typedef enum
{
	SPI_NOK=0,
	SPI_OK=1
}SPI_STATUS;

#endif /* SPI_CONFIG_H_ */