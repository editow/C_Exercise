//求某个数列的前40个和，1，1，2，3，5，8，13，21......
#include"stdio.h"
main()
{
	int a[40],i,k=0;
	a[0]=a[1]=1;
	for(i=2;i<40;i++)
	{
		a[i]=a[i-2]+a[i-1];
	}
	for(i=0;i<40;i++)
	{
    	printf("%d\t",a[i]);
	}	
}