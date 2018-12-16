#include "stm32f10x.h"
#include "usart.h"
#include "WS2811.h"
#include "delay.h"

int main(void)
{	
	int i;
	long j,x;
	delay_init();
	USART1_Config();
	WS_Init();
	printf("test");
	
	WS_SetAll();
	
	printf("end");
	delay_ms(1000);
	x = 0xff1493;
	for(i = 0;i < nWs;i++)
		{
			WsDat[i] = x;
		}
		WS_SetAll();
//	for(j=0;j<256;j++)
//	{
//		for(i = 0;i < nWs;i++)
//		{
//			WsDat[i] = x;
//		}
//		WS_SetAll();
//		delay_ms(2000);
//		x = x + 0x010100;
//		printf("changeg\r\n");
//	}
//	ColorToColor(0x0000ff, 0xFFFFFF);
}

	
