/*
 * ONE_WIRE_Driver.c
 */ 

#include "ds18b20.h"
#include "LCD.h"


/**
*  @file  <ONE_WIRE_Driver.c>
*  @brief <Implements the Ds18b20 Libarary to measure temperature.>
*/

int main()
{
	uint8 Temp = 0;
	
	LCD_init();
	/* Configuring the DS18B20 sensor by selecting 12-Bit conversion Resolution*/
	
	
	
	while(1)
	{
		
		DS18B20_Sesnsor_Configure(Tweleve_Bit_Resolution);
		LCD_Select_RowCol(0,3);
		LCD_DisplayString("DS18B20 SENSOR");
		/* Read Sensor measuring*/
		Temp = DS18B20ReadTemp(Tweleve_Bit_Resolution);
		LCD_Select_RowCol(1,0);
		LCD_DisplayString("Temperature = ");
		LCD_DisplayInt(Temp);
		
	}

}


  
