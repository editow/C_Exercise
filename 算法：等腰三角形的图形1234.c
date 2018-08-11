#include<stdio.h>
main()
{
 int a,b,d,t;
 for(a=1;a<=5;a++)
 {
	 t=a;
  {
   for(b=1;b<=5-a;b++)
    printf(" ");
  }
  for(d=1;d<=2*a-1;d++)
  {
	  if(d<=a)
		  printf("%d",d);
	  else
	  {
		  t=t-1;
	      printf("%d",t);
	  }
  }

    printf("\n");
 }
}