#include<stdio.h>		//����ƽ�������㷨
#include<math.h>
double sqr(double x);
int main()
{
	double x;
	printf("������һ������");
	scanf("%lf", &x);
	printf("���ƽ����%lf�Ľ���ֵ��%.18lf\n", x, sqr(x));
	return 0;
}
double sqr(double x)
{
	double i = x;
	while ((int)fabs(i*i - x) > 0){
		i = (i + x / i) / 2;
		printf("%lf\n", i);
	}
	return i;
}