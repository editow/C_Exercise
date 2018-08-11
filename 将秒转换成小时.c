#include<stdio.h>
int main()
{
	int sec,min,left,hours;
	const int SEC_PER_MIN=60;
	printf("convert seconds to minutes and seconds!\n");
	printf("enter the number of seconds\n");
	scanf("%d",&sec);
	while(sec>0){
		min=sec/SEC_PER_MIN;
		left=sec%SEC_PER_MIN;
		hours=min/SEC_PER_MIN;
		min=min%SEC_PER_MIN;
		printf("%d seconds is %d hours, %d minutes,%d seconds.\n",sec,hours,min,left);
		printf("Enter next value (<=0 to quit):\n");
		scanf("%d",&sec);
	}
	printf("Done!");
	return 0;
}