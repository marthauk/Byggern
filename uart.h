#pragma once


void UART_Init(unsigned int ubbr);

void UART_Transmit( unsigned char data );

unsigned char UART_Receive(void);
