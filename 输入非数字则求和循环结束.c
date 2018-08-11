#include<stdio.h>				//¼òµ¥ÇóºÍ
int main()
{
	long num;
	long sum = 0L;
	int status;
	printf("Please enter an integer to summed:");
	printf(" q to quit:");
	status=scanf("%ld",&num);
	printf("value %d :",status);
	while(status==1){
		sum=sum+num;
		printf("Please enter next integer (q to quit):");
		status=scanf("%ld",&num);
		printf("value %d :",status);
	}
	printf("Those integers sum to %ld .\n",sum);
	return 0;
}