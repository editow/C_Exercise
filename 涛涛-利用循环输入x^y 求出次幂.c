#include<stdio.h>
int main()
{
	int x,y,z,sum=1;
	float f=1;
	printf("Please input value of x and y:");
	scanf("%d,%d",&x,&y);
	printf("Your enter is %d^%d .\n",x,y);
	if(y>=0){
		for(z=1;z<=y;z++){
			sum*=x;
			printf("%+6d\n",sum);
		}
	}
	else
		for(z=1;z<=-y;z++){
			sum*=x;
			f=1.0/sum;
			printf("%+6.30f\n",f);
		}
	return 0;
}