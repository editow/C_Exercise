/*3、x、y有如下函数关系，编写程序输入x，输出y值。


当x<1时y=x;当1<=x<10时y=2x-1;当x>=10时y=32-11*/
#include"stdio.h"
void main()
 {
	int x,y;
	printf("当x<1时y=x;当1<=x<10时y=2x-1;当x>=10时y=32-11，请输入x值：\n");
	scanf("%d",&x);
	if(x<1)
		y=x;
	else
		if(x>=10)
			y=3*x-11;
		else
			y=2*x-1;
		printf("y=%d\n",y); 
 }
