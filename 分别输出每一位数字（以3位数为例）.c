#include"stdio.h"         /*�ֱ����ÿһλ���֣���3λ��Ϊ����*/
void main()
 { 
	int a,s,d,f;
	printf("������һ��������3λ��������:");
	scanf("%3d",&a);
	s=(a-(a%100))/100;
	d=((a%100)-((a%100)%10))/10;
	f=(a%10);
	printf("%d,%d,%d\n",s,d,f);
 } 