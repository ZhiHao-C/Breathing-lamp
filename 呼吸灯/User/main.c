#include "stm32f10x.h"                  // Device header
#include "bps_led.h"
#include "bps_usart.h"
#include "bps_AdvanceTim.h"
#include <stdio.h>


uint16_t i;

void delay_ms(unsigned int n)//ÑÓÊ±º¯Êý
{
	int i;
	while (n--)
	{
		for(i=0;i<5000;i++);
	}
}

int main()
{

	LED_GPIO_Config();
	ADVANCE_TIM_Init();
	while (1)
	{
		for(i=1;i<=100;i++)
		{
			TIM_SetCompare2(ADVANCE_TIM,i);
			delay_ms(20);
		}
		delay_ms(100);
		for(i=1;i<100;i++)
		{
			TIM_SetCompare2(ADVANCE_TIM,100-i);
			delay_ms(20);
		}
		

	}
	
}




