
#include"all.h"


	void CLK_init(void)
{
	RCC_AHB1ENR = RCC_AHB1ENR | (0x01 << 1); // port B clock enable
	STK_CTRL |= 0X00000005;
	STK_VAL |=0X229;	
}	




void km_mdelay(int m)
{
	  
STK_LOAD=16000*m;

}

void km_udelay(int n)
{
	  
STK_LOAD=16*n;

}

void systick_timer()
{
	CLK_init();
}




 