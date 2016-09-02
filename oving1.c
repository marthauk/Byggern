/*
 * Oving1.c
 *
 * Created: 01.09.2016 08:28:15
 *  Author: marthauk
 */ 
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <avr/io.h>

#include "uart.h"


#define BAUD 9600
#define FOSC 4915200
#define MYUBRR FOSC/16/BAUD-1

int main(void)
{	
	UART_Init(MYUBRR);
	//DDRD=0x01;
	//PORTD=0x01;
	//UART_Transmit(10);
    while(1)
    {
	//	PORTD ^= (1 << PD0);
	//		for (int i=0;i<1000;i++){
	//		}
		int test = 0;
		printf("hei, %i", test);
		//unsigned char c=UART_Receive();
		//UART_Transmit('a');
			
    }
	return 0;
}