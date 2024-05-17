#include "gm65.h"

void QR_deal()//
{
	while(1)
	{
   
			if(recv_ok==1)  //接收完成
			{
				uart_cnt = 0;        //最后清零，重新计数
				recv_ok = 0;         //接收完成标志置0
			}


	}
}