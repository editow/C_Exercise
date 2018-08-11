#include<stdio.h>
#include<math.h>
void main()
{
	int n,m,i;
	printf("请输入一个自然数:");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
		if(n%i==0)
		{
			printf("%d不是素数\n",n);
			return;
		}
		if(i>=n)
			printf("%d是素数\n",n);
}