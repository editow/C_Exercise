
#include<stdio.h>        /*��e��ֵ��e=1+1/1!+1/2!+1/3!+....+1/n!��Ҫ�󾫶�Ϊ1e-6*/
void main()
{
 int x=1,y=1;
 float d=1.0,e=0;
 for(;d>1e-6;y++)
 {
  e=e+d;
  x=x*y;
  d=1.0/x;
 }
 printf("e=%f\n",e);
}

