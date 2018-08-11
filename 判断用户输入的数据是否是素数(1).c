#include<stdio.h>
#include<math.h>
void main()
{
	int n,m,i;
	printf("请输入一个自然数:");
	scanf("%d",&n);
	m=(int)sqrt(n);
	for(i=2;i<=m;i++)
		if(n%i==0)
		{
			printf("%d不是素数\n",n);
			return;
		}
	printf("%d是素数\n",n);
}