#include"stdio.h"
/*����һ    Monday
���ڶ�    Tuesday 
������    Wednesday 
������    Thursday 
������    Friday
������    Saturday
������    Sunday   */
enum weekday
{
	sun,mon,tue,wed,thur,fri,sat
}day;
main()
{
	int i;
	printf("����������0~6��0Ϊ��ĩ��6��������");
	scanf("%d",&i);
	switch(i)
	{
	case 0:day=sun;break;
	case 1:day=mon;break;
	case 2:day=tue;break;
	case 3:day=wed;break;
	case 4:day=thur;break;
	case 5:day=fri;break;
	case 6:day=sat;break;
	}
	switch(i)
	{
	case sun:
	case sat:printf("������Ϣ��\n");break;
	default:if(i<6&&i>0)
				printf("���칤����\n");
		else printf("input error.\n");
	}
}