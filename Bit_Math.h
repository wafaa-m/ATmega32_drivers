#ifndef BIT_MATH_H_
#define BIT_MATH_H_

/*Macros like function*/
#define SET_BIT(NUM,BIT_NUM)	 NUM |= (1<<BIT_NUM)         /*Add logic(1) to specific bit*/
#define CLR_BIT(NUM,BIT_NUM)	 NUM &= (~(1<<BIT_NUM))      /*Add logic(0) to specific bit*/
#define GET_BIT(NUM,BIT_NUM)	 ((NUM>>BIT_NUM)&1)               /*Get specific bit value*/
#define TGL_BIT(NUM,BIT_NUM)     NUM ^= (1<<BIT_NUM)              /*NOT-Gate*/

#define Get_LOW_Nibble(REG)  REG & 0x0F              //HexaDecimal 
#define Get_HIGH_Nibble(REG) (REG>>4) & 0b00001111   //Binary
#define GET_PORT(REG) REG & 0xFF
#define TGL_PORT(REG) REG ^= 0xFF

#endif /* BIT_MATH_H_ */