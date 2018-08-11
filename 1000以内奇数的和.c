#include<stdio.h>
void main()
{
int i=1,s=0;
while(i<=1000)
{
 s=s+i;
 i=i+2;
}
printf("1000以内奇数的和为%d\n",s);
}
