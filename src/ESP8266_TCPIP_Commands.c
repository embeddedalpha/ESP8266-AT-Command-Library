#include "ESP8266_TCPIP_Commands.h"

/****************************************************************************/
int ESP8266_Establish_Single_TCP_Connection(char *remoteIP, int remotePORT)
{
	printConsole("AT+CIPSTART=\"TCP\",\"%s\",%d\r\n",remoteIP,remotePORT);
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

int ESP8266_Establish_Single_UDP_Connection(char *remoteIP, int remotePORT)
{
	printConsole("AT+CIPSTART=\"UDP\",\"%s\",%d\r\n",remoteIP,remotePORT);
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

int ESP8266_Establish_Single_SSL_Connection(char *remoteIP, int remotePORT)
{
	printConsole("AT+CIPSTART=\"SSL\",\"%s\",%d\r\n",remoteIP,remotePORT);
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


int ESP8266_Send_Data_to_Single_Connection(int length, char *s)
{
	printf("AT+CIPSEND=%d",length);
	Console_Return(response);
    int last = response[strlen(response) -1];
    if(last == 61)
    {
    	Console_Dump(s);
    }
    int last = response[strlen(response) -1];
    int s_last = response[strlen(response) -2];
	while((last == 75) && (s_last == 79))
	{
		return 1;
		break;
	}
	return 0;
}

int ESP8266_Reset_Segment_IDCount_for_Single_Connection(void)
{
	printConsole("AT+CIPBUFRESET");
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


int ESP8266_Enable_Single_Connection(void)
{
	printConsole("AT+CIPMUX=0");
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





/****************************************************************************/





int ESP8266_Establish_Multiple_TCP_Connection(int linkedID,char *remoteIP, int remotePORT)
{
	printConsole("AT+CIPSTART=%d,\"TCP\",\"%s\",%d\r\n",linkedID,remoteIP,remotePORT);
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



int ESP8266_Establish_Multiple_UDP_Connection(int linkedID,char *remoteIP, int remotePORT)
{
	printConsole("AT+CIPSTART=%d,\"UDP\",\"%s\",%d\r\n",linkedID,remoteIP,remotePORT);
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


int ESP8266_Send_Data_to_Multiple_Connection(int linkID,int length, char *s)
{
	printf("AT+CIPSEND=%d,%d",linkID,length);
	Console_Return(response);
    int last = response[strlen(response) -1];
    if(last == 61)
    {
    	Console_Dump(s);
    }
    int last = response[strlen(response) -1];
    int s_last = response[strlen(response) -2];
	while((last == 75) && (s_last == 79))
	{
		return 1;
		break;
	}
	return 0;
}


int ESP8266_Reset_Segment_IDCount_for_Multiple_Connection(void)
{
	printConsole("AT+CIPBUFRESET");
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


int ESP8266_Enable_Multiple_Connection(void)
{
	printConsole("AT+CIPMUX=1");
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


int ESP8266_Delete_TCP_Server(int port)
{
	printConsole("AT+CIPSERVER=0,%d",port);
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




int ESP8266_Create_TCP_Server(int port)
{
	printConsole("AT+CIPSERVER=1,%d",port);
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


int ESP8266_Set_Max_Connections_Allowed_by_Server(int num)
{
	printConsole("AT+CIPSERVERMAXCONN=%d",num);
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

int ESP8266_Set_SSL_Buffer_Size(int buffer)
{
	printConsole("AT+CIPSSLSIZE=%d\r\n",buffer);
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

int ESP8266_Configure_SSL_Client(mode)
{
	printConsole("AT+CIPSSLCCONF=%d\r\n",mode);
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


char * ESP8266_Get_Local_IP_Address(void)
{
	printConsole("AT+CIFSR\r\n");
	Console_Return(response);
    int last = response[strlen(response) -1];
    int s_last = response[strlen(response) -2];
	while((last == 75) && (s_last == 79))
	{
		return 1;
		break;
	}
	return response;
}

