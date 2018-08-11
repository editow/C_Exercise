//1.已知直角三角形的两个直角边长分别为3，4，求此直角三角形的斜边长C及面积S。
#include"stdio.h"
#include"math.h"
main()
{
	int a,b;
	float s,c;
	a=3;b=4;
	c=sqrt(a*a+b*b);
	s=1.0*(a*b)/2;
	printf("直角三角形的斜边长=%0.2f,直角三角形的面积=%0.2f",c,s);
}