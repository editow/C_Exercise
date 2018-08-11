#include<stdio.h>
#define RATE1 0.12589
#define RATE2 0.17901
#define RATE3 0.20971
#define BREAK1 360.0
#define BREAK2 680.0
#define BASE1 (BREAK1*RATE1)
#define BASE2 (BASE1+RATE2*(BREAK2-BREAK1))
int main()
{
	double kwh;
	double bill;
	printf("请输入您的用电电量(kwh):");
	scanf("%lf",&kwh);
	if(kwh<=BREAK1)
		bill=RATE1*BREAK1;
	else
		if(kwh<=BREAK2)
			bill=BASE1+(RATE2*(kwh-BREAK1));
		else
			bill=BASE2+(RATE3*(kwh-BREAK2));
	printf("您的电量是 %.2f , 需要交 $%.2f\n ",kwh,bill);
	return 0;
}