#ifndef _ESP8266_Wifi_Commands_H_
#define _ESP8266_Wifi_Commands_H_

#include "stm32f10x.h"
#include "board.h"
#include "USART.h"
#include "Debug.h"
#include "stdbool.h"
#include "stdio.h"

int ESP8266_Config_Wifi_Mode(int mode);

int ESP8266_Configure_AccessPoint(char *ssid, char *password);

char * ESP8266_List_AccessPoint(void);

int ESP8266_Disconnect_from_AccessPoint(void);

int ESP8266_Configure_asSoftAP(char *ssid, char *password, int channel, int encryption);

char * ESP8266_ListofConnected_AccessPoint(void);

int ESP8266_Configure_DHCP(int mode, int enable);

int ESP8266_Set_IP_Address_SoftAP(int enable, int lease_time, char *start_ip, char *end_ip);

int ESP8266_AutoConnect_AP(int enable);

int ESP8266_Set_MACforStation(char *mac);

int ESP8266_Set_IPforStation(char *ip);

int ESP8266_Set_MACforSoftAP(char *mac);

int ESP8266_Set_IPforSoftAP(char *ip);

int ESP8266_Enable_WPS();

int ESP8266_Disable_WPS();

int ESP8266_Configure_MDNS(int enable, char *hostname, char *server_name, int server_port);

int ESP8266_Configure_Station_Name(char *hostname);


#endif
