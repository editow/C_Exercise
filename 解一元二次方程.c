#include"stdio.h"
#include"math.h"
main()
{
	double fun(float a,float b,float c);
	float a,b,c;
	printf("请输入一元二次方程的a，b，c：");
	scanf("%f %f %f",&a,&b,&c);
    printf("方程是:%0.1fx^2%+0.1fx%+0.1f=0\n",a,b,c);
	fun(a,b,c);
}
double fun(float a,float b,float c)
{
	double x_1,x_2,q;
	q=sqrt(b*b-4*a*c);
	if((b*b-4*a*c)<0)
	{
		printf("方程无解.\n");
	}
	if((b*b-4*a*c)>0)
	{
		x_1=(-b-q)/2.0*a;
		x_2=(-b+q)/2.0*a;
		printf("方程有两个解：\nx_1=%f,x_2=%f\n",x_1,x_2);
	}
	if((b*b-4*a*c)==0)
	{
		x_1=(-b)/2.0*a;
		printf("方程仅有一个解：\nx_1=x_2=%f\n",x_1);
	}
	return 0;
}
