#include<stdio.h>
void main()
{
	int n,i,j=1;
	printf("请输入一个自然数:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
		if(n%i==0)
		{
			j=0;
			break;
		}
		if(j==0)
            printf("%d不是素数\n",n);
		else
			printf("%d是素数\n",n);
}