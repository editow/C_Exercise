#include<stdio.h>
void main()
{
	int n,i,j=1;
	printf("������һ����Ȼ��:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
		if(n%i==0)
		{
			j=0;
			break;
		}
		if(j==0)
            printf("%d��������\n",n);
		else
			printf("%d������\n",n);
}