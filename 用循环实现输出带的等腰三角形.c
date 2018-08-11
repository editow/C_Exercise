#include"stdio.h"
main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<i;j++)
			printf("*");
		for(k=1;k>=4-i;k--)
			printf("*");
	printf("\n");	
	}
}