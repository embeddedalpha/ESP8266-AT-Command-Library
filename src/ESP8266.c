#include "ESP8266.h"


int Connect_as_TCP_Client(char *ssid, char *password, char *remoteIP, char *remotePORT, int length, char *data)
{
int i;
i = ESP8266_Config_Wifi_Mode(3);
if(i == 1)
{
	i = ESP8266_Connect_to_AccessPoint(ssid,password);
	if (i == 1)
	{
		i = ESP8266_Establish_Single_TCP_Connection(remoteIP, remotePORT);
		if (i ==1)
		{
			i = ESP8266_Send_Data_to_Single_Connection(length,data);
			if (i == 1) {
				ESP8266_Close_TCP_Connection();
			}
			else {
				break;
			}

		}

		else {
			break;
		}
	}
	else
	{
		break;
	}
}
else 
{
return 0;
}
return 1;
}


