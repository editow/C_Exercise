#include<stdio.h>
#define CANSS (cans==1?"can":"cans")
#define COVERAGE 200 
int main()
{
	int sq_feet;
	int cans;
	printf("Enter number of square feet to be painted:\n");
	while(1==scanf("%d",&sq_feet)){
		cans=sq_feet/COVERAGE;
		cans+=(sq_feet%COVERAGE==0)?0:1;
		printf("You need %d %s of paint.\n",cans,CANSS);
		printf("Pkease Enter next number(q to quit).\n");
	}
	return 0;
}