#include"stdio.h"
 void main()
 {
	 int x;
	 printf("请输入三位内的正整数：");
	 scanf("%d",&x);
	 {
		 if(x>=0&&x<=9)
			 printf("%d是一位数.\n",x);
		 else
			 if(x>=10&&x<=99)
				 printf("%d是两位数.\n",x);
			 else
				 if(x>=100&&x<=999)
					 printf("%d是三位数.\n");
				 else printf("INPUT ERROR.\n");
	 }
 } 
