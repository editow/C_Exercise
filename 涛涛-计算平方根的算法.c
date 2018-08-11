#include<stdio.h>		//计算平方根的算法
#include<math.h>
double sqr(double x);
int main()
{
	double x;
	printf("请输入一个数：");
	scanf("%lf", &x);
	printf("求出平方根%lf的近似值是%.18lf\n", x, sqr(x));
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