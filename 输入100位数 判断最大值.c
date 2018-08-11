#include<stdio.h>
#include<string.h>
int main()
{
	int a[100],i,max,j;
	printf("Please input in 100 number:( Enter <=0 to quit)");
	for(i=0;i<100;i++){
		scanf("%d",&a[i]);
		if(a[i]<=0) break;
	}
	max=a[0];
	i=0;
	while(++i<100){
		if(a[i]>=max)
			max=a[i];
	}
	printf("Max is %d \n",max);
	return 0;
}