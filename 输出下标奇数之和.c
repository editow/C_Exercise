#include"stdio.h"
main()
{
	int num[10]={2,4,6,8,10,12,14,16,18,20},s=0,i;
	printf("输出下标奇数之和");
	for(i=0;i<10;i++)
	{
		num[i]==i;
	}
	for(i=0;i<10;i++)
	{
		
		if(i%2==1)
		{
			s=s+num[i];
		}
	}
	printf("%d\n",s);
}