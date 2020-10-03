#include "ESP8266_Basic_Commands.h"



int ESP8266_AT_Start(void)
{

	printConsole("AT\r\n");
	Console_Return(response);
    int last = response[strlen(response) -1];
    int s_last = response[strlen(response) -2];
	while((last == 75) && (s_last == 79))
	{
		return 1;
	}
	return 0;
}

int ESP8266_Restart(void)
{

	printConsole("AT+RST\r\n");
	Console_Return(response);
    int last = response[strlen(response) -1];
    int s_last = response[strlen(response) -2];
	while((last == 75) && (s_last == 79))
	{
		return 1;
	}
	return 0;
}

int ESP8266_Enter_DeepSleep(int time_ms)
{

	printConsole("AT+GSLP=%d\r\n",time_ms);
	Console_Return(response);
    int last = response[strlen(response) -1];
    int s_last = response[strlen(response) -2];
	while((last == 75) && (s_last == 79))
	{
		return 1;
	}
	return 0;
}

int ESP8266_Enter_Sleep(int Sleep_mode)
{

	printConsole("AT+SLEEP=%d\r\n",Sleep_mode);
	Console_Return(response);
    int last = response[strlen(response) -1];
    int s_last = response[strlen(response) -2];
	while((last == 75) && (s_last == 79))
	{
		return 1;
	}
	return 0;
}

int ESP8266_Ext_Wakeup_GPIO(int enable, int gpio_trigger, int trig_level, int gpio_ind, bool ind_level)
{

	printConsole("AT+WAKEUPGPIO=%d,%d,%d,%d,%d\r\n",enable,gpio_trigger,trig_level,gpio_ind,ind_level);
	Console_Return(response);
    int last = response[strlen(response) -1];
    int s_last = response[strlen(response) -2];
	while((last == 75) && (s_last == 79))
	{
		return 1;
	}
	return 0;
}

int ESP8266_RFPower(int power)
{

	printConsole("AT+RFVDD=3300\r\n");
	Console_Return(response);
    int last = response[strlen(response) -1];
    int s_last = response[strlen(response) -2];
	while((last == 75) && (s_last == 79))
	{
		printConsole("AT+RFPOWER=%d\r\n",power);
		Console_Return(response);
	    int last = response[strlen(response) -1];
	    int s_last = response[strlen(response) -2];
		while((last == 75) && (s_last == 79))
		{
			return 1;
			break;
		}
	}
	return 0;
}

int ESP8266_GPIO_Config(int pin, int mode, int pull_up, int dir)
{
	printConsole("AT+SYSIOSETCFG=%d,%d,%d",pin,mode,pull_up);
    int last = response[strlen(response) -1];
    int s_last = response[strlen(response) -2];
	while((last == 75) && (s_last == 79))
	{
		printConsole("AT+SYSGPIODIR=%d,%d",pin,dir);
	    last = response[strlen(response) -1];
	    s_last = response[strlen(response) -2];
		while((last == 75) && (s_last == 79))
		{
			return 1;
			break;
		}
break;
	}
	return 1;
}

int ESP8266_GPIO_Write(int pin, int level)
{
	printConsole("AT+SYSGPIOWRITE=%d,%d",pin,level);
    int last = response[strlen(response) -1];
    int s_last = response[strlen(response) -2];
    while((last == 75) && (s_last == 79))
    {
    	return 1;
    	break;
    }
    return 0;
}

int ESP8266_GPIO_Read(int pin)
{
	int a;
	printConsole("AT+SYSGPIOWRITE=%d",pin);
    int last = response[strlen(response) -1];
    int s_last = response[strlen(response) -2];
    while((last == 75) && (s_last == 79))
    {
    	a = response[strlen(response) -3];
    	return a;
    	break;
    }
    return 0;
}
