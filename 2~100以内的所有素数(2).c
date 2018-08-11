#include<stdio.h>
#include<math.h>
void main()
{
	int i,j,m=0,k;
	for(i=2;i<=100;i++)
	{
		for(j=2;j<=i-1;j++)
		{
			if(i%j==0)
				break;
		if(j>=i)
			printf("%d\t",i);
		}
	}
	printf("\n");

}