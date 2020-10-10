#ifndef _ESP8266_H_
#define _ESP8266_H_




#include "stm32f10x.h"
#include "USART.h"
#include "ESP8266_Basic_Commands.h"
#include "ESP8266_WiFi_Commands.h"
#include "ESP8266_TCPIP_Commands.h"
#include "stdio.h"
#include "string.h"
#include "board.h"
#include "Debug.h"
#include "stdbool.h"


#define ERROR 0
#define WIFI_CONNECTED 1
#define WIFI_DISCONNECT 0
#define WIFI_GOT_IP 1



int Connect_as_TCP_Client(char *ssid, char *password, char *remoteIP, char *remotePORT, int length, char *data);







#endif

