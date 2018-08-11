#include<stdio.h>
main()
{
	int a,b,c,d,e;
	for(a=1;a<=4;a++)
	{
		{
			for(b=1;b<=4-a;b++)
				printf(" ");
		}
		for(d=1;d<=a;d++)
			printf("%d",d);
		
			switch(a)
		{	case 1:
				printf("");break;
			case 2:
				printf("1");break;
			case 3:
				printf("21");break;
			case 4:
				printf("321");break;
		}
				printf("\n");
	}
}