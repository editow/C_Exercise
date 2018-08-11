#include"stdio.h"
void main()
{
	int table[10]={77,111,213,222,300,400,555,632,987,1024},key,low,high,mid;
	low=0;high=9;mid=(low+high)/2;
	printf("请输入需要查找的关键字值：");
	scanf("%d",&key);
	while(low<=high)
	{
		if(table[mid]==key)
		{
			printf("查找成功，位置是：%d\n",mid);
			break;
		}
		else
		{
			if(key<table[mid])high=mid-1;
			else              low=mid+1;
			mid=(low+high)/2;
		}
	}
	if(low>high)
		printf("查找失败\n");
}