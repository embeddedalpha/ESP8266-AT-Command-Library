# ESP8266 AT Command Library

### Status: Incomplete 🔴

#### AT-Commands List: https://www.espressif.com/sites/default/files/documentation/4a-esp8266_at_instruction_set_en.pdf

![image](https://user-images.githubusercontent.com/38166489/94998224-d8e12380-05cd-11eb-9e0d-8b36d503739e.png)


#### An all encompassing driver to commnuicate with ESP8266 Wi-Fi module via AT commands over UART. The driver is broken down in 3 base libraries : basic, TCP/IP and Wi-fi commands. This is done to facilitate the user to go through each type of command and include only those which are needed for the application. The main library "ESP8266.h" is to be included in main.c file. 

#### Functions included in ESP8266_Basic_Commands.h are:
```C
int ESP8266_Enter_Sleep(int Sleep_mode);
int ESP8266_Ext_Wakeup_GPIO(int enable, int gpio_trigger, int trig_level, int gpio_ind, bool ind_level);
int ESP8266_RFPower(int power);
int ESP8266_GPIO_Config(int pin, int mode, int pull_up, int dir);
int ESP8266_GPIO_Write(int pin, int level);
int ESP8266_GPIO_Read(int pin);
```

#### Functions included in ESP8266_WiFi_Commands.h are:
```C
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
```
