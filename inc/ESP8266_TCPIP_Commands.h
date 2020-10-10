#ifndef _ESP8266_TCPIP_Commands_H_
#define _ESP8266_TCPIP_Commands_H_




#include "stm32f10x.h"
#include "board.h"
#include "USART.h"
#include "Debug.h"
#include "stdbool.h"
#include "stdio.h"
#include "string.h"


//Single Connection Mode

int ESP8266_Establish_Single_TCP_Connection(char *remoteIP, int remotePORT);

int ESP8266_Establish_Single_UDP_Connection(char *remoteIP, int remotePORT);

int ESP8266_Establish_Single_SSL_Connection(char *remoteIP, int remotePORT);

int ESP8266_Send_Data_to_Single_Connection(int length, char *s);

int ESP8266_Reset_Segment_IDCount_for_Single_Connection(void);

int ESP8266_Enable_Single_Connection(void);

//int ESP8266_Disable_Single_Connection(void);


//Multiple Connection Mode

int ESP8266_Establish_Multiple_TCP_Connection(int linkedID,char *remoteIP, int remotePORT);

int ESP8266_Establish_Multiple_UDP_Connection(int linkedID,char *remoteIP, int remotePORT);

int ESP8266_Send_Data_to_Multiple_Connection(int linkID,int length, char *s);

int ESP8266_Reset_Segment_IDCount_for_Multiple_Connection(void);

int ESP8266_Enable_Multiple_Connections(void);

//int ESP8266_Disable_Multiple_Connections(void);

int ESP8266_Set_Max_Connections_Allowed_by_Server(int num);


//General

int ESP8266_Set_SSL_Buffer_Size(int buffer);

int ESP8266_Configure_SSL_Client(void);

char * ESP8266_Get_Local_IP_Address(void);

int ESP8266_Create_TCP_Server(int port);

int ESP8266_Delete_TCP_Server(int port);

int ESP8266_Set_TCP_Server_Timeout(int time);



#endif
