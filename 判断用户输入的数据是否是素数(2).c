#include<stdio.h>
#include<math.h>
void main()
{
	int n,m,i;
	printf("������һ����Ȼ��:");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
		if(n%i==0)
		{
			printf("%d��������\n",n);
			return;
		}
		if(i>=n)
			printf("%d������\n",n);
}