/*3��x��y�����º�����ϵ����д��������x�����yֵ��


��x<1ʱy=x;��1<=x<10ʱy=2x-1;��x>=10ʱy=32-11*/
#include"stdio.h"
void main()
 {
	int x,y;
	printf("��x<1ʱy=x;��1<=x<10ʱy=2x-1;��x>=10ʱy=32-11��������xֵ��\n");
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
