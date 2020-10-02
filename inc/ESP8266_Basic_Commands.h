#ifndef _ESP8266_Basic_Commands_H_
#define _ESP8266_Basic_Commands_H_


#include "stm32f10x.h"
#include "board.h"
#include "USART.h"
#include "Debug.h"
#include "stdbool.h"
#include "stdio.h"


/********************************************************************************
 *@brief: This function sends "AT" to check if the firmware is working
 *@param: none
 *@return: 1 = OK
 *         0 = Error
 ********************************************************************************/
int ESP8266_AT_Start(void);



/********************************************************************************
 *@brief: This function restarts ESP8266
 *@param: none
 *@return: 1 = OK
 *         0 = Error
 ********************************************************************************/
int ESP8266_Restart(void);



/********************************************************************************
 *@brief: This function puts ESP8266 in deep sleep
 *@param: time_ms: time in milliseconds
 *@return: 1 = OK
 *         0 = Error
 ********************************************************************************/
int ESP8266_Enter_DeepSleep(int time_ms);



/********************************************************************************
 *@brief: This function puts ESP8266 in sleep
 *@param: Sleep_mode = 0     disables sleep mode
 *                     1     Light-sleep mode
 *                     2     Modem-sleep mode
 *@return: 1 = OK
 *         0 = Error
 ********************************************************************************/
int ESP8266_Enter_Sleep(int Sleep_mode);


/********************************************************************************
 *@brief: This function sets up an pin to wakeup from sleep mode
 *@param: enable = 0     ESP8266 can NOT be woken up from light-sleep by GPIO.
 *                 1     ESP8266 can be woken up from light-sleep by GPIO.
 *        gpio_trigger = [0 : 15]
 *        trig_level = 0     The GPIO wakes up ESP8266 on low level.
 *                     1     The GPIO wakes up ESP8266 on high level.
 *        gpio_ind = [0 : 15]
 *        ind_level = 0     The GPIO is set to be low level after the wake-up process.
 *                    1     The GPIO is set to be high level after the wake-up process.
 *@return: 1 = OK
 *         0 = Error
 ********************************************************************************/

int ESP8266_Ext_Wakeup_GPIO(int enable, int gpio_trigger, int trig_level, int gpio_ind, bool ind_level);


/********************************************************************************
 *@brief: This function sets RF TX Power
 *@param: power = [0 : 82]
 *@return: 1 = OK
 *         0 = Error
 ********************************************************************************/

int ESP8266_RFPower(int power);

/********************************************************************************
 *@brief: This function sets up the GPIO to be used 
 *@param: pin = [0 : 15]
 *        level = 1 or 0
 *@return: 1 or 0 depending upon the levle
 ********************************************************************************/

int ESP8266_GPIO_Config(int pin, int mode, int pull_up, int dir);

/********************************************************************************
 *@brief: This function writes to a GPIO
 *@param: pin = [0 : 15]
 *        level = 1 or 0
 *@return: 1 or 0 depending upon the levle
 ********************************************************************************/

int ESP8266_GPIO_Write(int pin, int level);

/********************************************************************************
 *@brief: This function reads the GPIO level
 *@param: pin = [0 : 15]
 *@return: 1 or 0 depending upon the levle
 ********************************************************************************/

int ESP8266_GPIO_Read(int pin);





#endif

