#include<stdio.h>
#include<math.h>
void main()
{
	int n,m,i;
	printf("������һ����Ȼ��:");
	scanf("%d",&n);
	m=(int)sqrt(n);
	for(i=2;i<=m;i++)
		if(n%i==0)
		{
			printf("%d��������\n",n);
			return;
		}
	printf("%d������\n",n);
}