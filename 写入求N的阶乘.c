#include<stdio.h>
void main()
{
 int x=1,y=1,n;
 printf("please input  n!:");
 scanf("%d",&n);
 do
 {
     x=x*y;
  y++;
 }while(y<=n);
 printf("%d�Ľ׳�Ϊ%d\n",n,x);
}