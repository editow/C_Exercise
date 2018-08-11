#include"stdio.h"         /*分别输出每一位数字（以3位数为例）*/
void main()
 { 
	int a,s,d,f;
	printf("请输入一个不多于3位的正整数:");
	scanf("%3d",&a);
	s=(a-(a%100))/100;
	d=((a%100)-((a%100)%10))/10;
	f=(a%10);
	printf("%d,%d,%d\n",s,d,f);
 } 