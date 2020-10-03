#include "ESp8266_WiFi_Commands.h"


int ESP8266_Config_Wifi_Mode(int mode)
{
	printConsole("AT+CWMODE_DEF=%d\r\n",mode);
	Console_Return(response);
    int last = response[strlen(response) -1];
    int s_last = response[strlen(response) -2];
	while((last == 75) && (s_last == 79))
	{
		return 1;
		break;
	}
	return 0;
}

int ESP8266_Configure_AccessPoint(char *ssid, char *password)
{
	printConsole("AT+CWJAP_DEF=\"%s\",\"%s\"\r\n",ssid,password);
	Console_Return(response);
	int last = response[strlen(response)-1];
	int s_last = response[strlen(response)-2];
	while((last == 75) && (s_last == 79))
	{
		return 1;
		break;
	}
	return 0;
}


char * ESP8266_List_AccessPoint(void)
{
	printConsole("AT+CWLAPOPT=1,15\r\n");
	//Delay
	printConsole("AT+CWLAP\r\n");
	Console_Return(response);
	return response;
}

int ESP8266_Disconnect_from_AccessPoint(void)
{
	printConsole("AT+CWQAP\r\n");
	Console_Return(response);
	int last = response[strlen(response)-1];
	int s_last = response[strlen(response)-2];
	while((last == 75) && (s_last == 79))
	{
		return 1;
		break;
	}
	return 0;
}

int ESP8266_Configure_asSoftAP(char *ssid, char *password, int channel, int encryption)
{
	printConsole("AT+CWSAP_DEF=\"%s\",\"%s\",%d,%d\r\n",ssid,password,channel,encryption);
	Console_Return(response);
	int last = response[strlen(response)-1];
	int s_last = response[strlen(response)-2];
	while((last == 75) && (s_last == 79))
	{
		return 1;
		break;
	}
	return 0;
}


char * ESP8266_ListofConnected_AccessPoint(void)
{
	printConsole("AT+CWLIF\r\n");
	Console_Return(response);
	int last = response[strlen(response)-1];
	int s_last = response[strlen(response)-2];
	while((last == 75) && (s_last == 79))
	{
		return response;
		break;
	}
	return 0;
}

int ESP8266_Configure_DHCP(int mode, int enable)
{
	printConsole("AT+CWDHCP_DEF=%d,%d\r\n",mode,enable);
	Console_Return(response);
	int last = response[strlen(response)-1];
	int s_last = response[strlen(response)-2];
	while((last == 75) && (s_last == 79))
	{
		return 1;
		break;
	}
	return 0;
}


int ESP8266_Set_IP_Address_SoftAP(int enable, int lease_time, char *start_ip, char *end_ip)
{
	printConsole("AT+CWDHCPS_DEF=%d,%d,\"%s\",\"%s\"\r\n",enable,lease_time,start_ip,end_ip);
	Console_Return(response);
	int last = response[strlen(response)-1];
	int s_last = response[strlen(response)-2];
	while((last == 75) && (s_last == 79))
	{
		return 1;
		break;
	}
	return 0;
}

int ESP8266_AutoConnect_AP(int enable)
{
	printConsole("AT+CWAUTOCONN=%d",enable);
	Console_Return(response);
	int last = response[strlen(response)-1];
	int s_last = response[strlen(response)-2];
	while((last == 75) && (s_last == 79))
	{
		return 1;
		break;
	}
	return 0;
}

int ESP8266_Set_MACforStation(char *mac)
{
	printConsole("AT+CIPSTAMAC_DEF=\"%s\"\r\n",mac);
	Console_Return(response);
	int last = response[strlen(response)-1];
	int s_last = response[strlen(response)-2];
	while((last == 75) && (s_last == 79))
	{
		return 1;
		break;
	}
	return 0;
}

int ESP8266_Set_IPforStation(char *ip)
{
	printConsole("AT+CIPSTA_DEF=\"%s\"\r\n",ip);
	Console_Return(response);
	int last = response[strlen(response)-1];
	int s_last = response[strlen(response)-2];
	while((last == 75) && (s_last == 79))
	{
		return 1;
		break;
	}
	return 0;
}


int ESP8266_Set_MACforSoftAP(char *mac)
{
	printConsole("AT+CIPAPMAC_DEF=\"%s\"\r\n",mac);
	Console_Return(response);
	int last = response[strlen(response)-1];
	int s_last = response[strlen(response)-2];
	while((last == 75) && (s_last == 79))
	{
		return 1;
		break;
	}
	return 0;
}

int ESP8266_Set_IPforSoftAP(char *ip)
{
	printConsole("AT+CIPAP_DEF=\"%s\"\r\n",ip);
	Console_Return(response);
	int last = response[strlen(response)-1];
	int s_last = response[strlen(response)-2];
	while((last == 75) && (s_last == 79))
	{
		return 1;
		break;
	}
	return 0;
}


int ESP8266_Enable_WPS()
{
	printConsole("AT+WPS=1\r\n");
	Console_Return(response);
	int last = response[strlen(response)-1];
	int s_last = response[strlen(response)-2];
	while((last == 75) && (s_last == 79))
	{
		return 1;
		break;
	}
	return 0;
}

int ESP8266_Disable_WPS()
{
	printConsole("AT+WPS=0\r\n");
	Console_Return(response);
	int last = response[strlen(response)-1];
	int s_last = response[strlen(response)-2];
	while((last == 75) && (s_last == 79))
	{
		return 1;
		break;
	}
	return 0;
}

int ESP8266_Configure_MDNS(int enable, char *hostname, char *server_name, int server_port)
{
	printConsole("AT+MDNS=%d,\"%s\",\"%s\",%d\r\n",enable,hostname,server_name,server_port);
	Console_Return(response);
	int last = response[strlen(response)-1];
	int s_last = response[strlen(response)-2];
	while((last == 75) && (s_last == 79))
	{
		return 1;
		break;
	}
	return 0;
}

int ESP8266_Configure_Station_Name(char *hostname)
{
	printConsole("AT+CWHOSTNAME=\"%s\"\r\n",hostname);
	Console_Return(response);
	int last = response[strlen(response)-1];
	int s_last = response[strlen(response)-2];
	while((last == 75) && (s_last == 79))
	{
		return 1;
		break;
	}
	return 0;
}

