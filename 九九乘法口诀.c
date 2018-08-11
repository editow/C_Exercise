#include"stdio.h"
void main()
{
	int i,j,m;
	printf("¾Å¾Å³Ë·¨¿Ú¾÷£º\n");
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		{
			m=j*i;
			printf("%d*%d=%d\t",j,i,m);
		}
		printf("\n");
	}
}