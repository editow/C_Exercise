#include"stdio.h"
 void main()
 {
	 int x;
	 printf("��������λ�ڵ���������");
	 scanf("%d",&x);
	 {
		 if(x>=0&&x<=9)
			 printf("%d��һλ��.\n",x);
		 else
			 if(x>=10&&x<=99)
				 printf("%d����λ��.\n",x);
			 else
				 if(x>=100&&x<=999)
					 printf("%d����λ��.\n");
				 else printf("INPUT ERROR.\n");
	 }
 } 
