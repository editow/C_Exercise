#include"stdio.h"
/*星期一    Monday
星期二    Tuesday 
星期三    Wednesday 
星期四    Thursday 
星期五    Friday
星期六    Saturday
星期天    Sunday   */
enum weekday
{
	sun,mon,tue,wed,thur,fri,sat
}day;
main()
{
	int i;
	printf("请输入数字0~6，0为周末，6是周六：");
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
	case sat:printf("今天休息！\n");break;
	default:if(i<6&&i>0)
				printf("今天工作！\n");
		else printf("input error.\n");
	}
}