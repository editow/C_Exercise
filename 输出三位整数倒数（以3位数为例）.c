#include"stdio.h"
main()
{
	int x,temp=0;
	printf("Please input three plus int :\n");
	scanf("%d",&x);
	while(x>0)
	{
		temp=temp*10+x%10;
		x=x/10;
	}
	printf("%d\n ",temp);
}