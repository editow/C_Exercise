#include"stdio.h"
void main()
{
	int table[10]={213,111,222,77,400,300,987,1024,632,555},key,i;
	printf("please input ask find keyword:");
	scanf("%d",&key);
	for(i=0;i<10;i++)
	{
		if(table[i]==key)
		{
			printf("find finish,Location:%d\n",i);
		}
		
	}
	if(i==10)
	{
		printf("find lose!\n");
	}
}