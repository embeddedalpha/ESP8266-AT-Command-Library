#ifndef _DEBUG_
#define _DEBUG_

#include "stm32f10x.h"
#include "stdlib.h"
#include "stdarg.h"
#include "string.h"
#include "USART.h"
#include "stdio.h"

extern char response[100];

#define DEBUG_UART  USART1
#define delay				for(int i = 0; i<= 5000000; i++)

void InitConsole(void);
 void printConsole(char *msg, ...);
int Console_Dump(const char *s);
char * Console_Return(char *s);


#endif
