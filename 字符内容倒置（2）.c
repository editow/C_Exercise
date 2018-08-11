#include"stdio.h"
#include"string.h"
main()
{
	char a[60],j,i,t;
	printf("please input a string:");
	scanf("%s",a);
    j=strlen(a);
	for(i=0;i<j/2;i++)
	{
		t=a[i];
		a[i]=a[j-1-i];
		a[j-1-i]=t;
	}
	for(i=0;i<j;i++)
	{
		printf("%c",a[i]);
	}
	printf("\n");
}