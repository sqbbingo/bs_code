#ifndef __WS2811_H
#define __WS2811_H	 
#include "sys.h"


#define White       0xFFFFFF  // 白色
#define Black       0x000000  // 黑色
#define Red         0x00ff00  // 红色
#define Green       0xff0000  // 绿色
#define Blue        0x0000ff  // 蓝色


#define nWs 16		// 有多少颗WS2811级联

extern unsigned long WsDat[];

extern void WS_Init(void);
extern void WS_SetAll(void);
extern u32 ColorToColor(unsigned long color0, unsigned long color1);

		 				    
#endif






