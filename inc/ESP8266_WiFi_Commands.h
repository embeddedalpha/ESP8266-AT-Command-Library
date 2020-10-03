#ifndef _ESP8266_Wifi_Commands_H_
#define _ESP8266_Wifi_Commands_H_

#include "stm32f10x.h"
#include "board.h"
#include "USART.h"
#include "Debug.h"
#include "stdbool.h"
#include "stdio.h"


int ESP8266_Set_WiFi(int mode);

int * ESP8266_List_IPStations_Connected(void);

int ESP8266_Dynamic_Host_Configuration(int mode, int enable);


int * ESP8266_Connect2AccessPoint(char *ssid, char *password );

int * ESP8266_List_All_AP(void);

int ESP8266_Disconnect_AP(void);

int ESP8266_SoftAP(char *ssid, char *password );

int ESP8266_SoftAP_Config();

int ESP8266_AutoConnect2AP(int enable);

int ESP8266_Set_MACofSoftAP(char *s);

int ESP8266_Set_IPofSoftAP(char *s);


int ESP8266_Set_MACofStation(char *s);

int ESP8266_Set_IPofStation(char *s);


int ESP8266_Enable_WPS(void);


#endif
