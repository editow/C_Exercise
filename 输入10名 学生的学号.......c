#include"stdio.h"
#include"string.h"
#define N 10          //定义学生人数
struct student        //学生的结构体
{
	int num;
	char name[8];
	int yuwen;
	int shuxue;
	int yingyu;
	int wuli;
	double avr;
}st[N];
void main()
{
	struct student t;         //用于后面进行冒泡排序时的中间变量
	int i,j,num;
	printf("请输入%d名学生的相关信息:\n",N);
	printf("*****************************************************\n");
	printf("学号 姓名 语文 数学 英语 物理\n");
	for(i=0;i<N;i++)
		scanf("%d%s%d%d%d%d",&st[i].num,&st[i].name,&st[i].yuwen,&st[i].shuxue,&st[i].yingyu,&st[i].wuli);
	printf("*****************************************************\n");
	printf("学号 姓名 语文 数学 英语 物理 平均分\n");
	for(i=0;i<N;i++)
	{
		st[i].avr=(st[i].yuwen+st[i].shuxue+st[i].yingyu+st[i].wuli)/4.0;
		printf("%-5d%-4s%-4d%-4d%-4d%-4d%.1lf",st[i].num,st[i].name,st[i].yuwen,st[i].shuxue,st[i].yingyu,st[i].wuli,st[i].avr);
		printf("\n");
	}
	printf("输入要查询学生的学号\n");
	scanf("%d",&num);
	for(i=0;i<N;i++)
	{
		if(st[i].num==num)
		{
			printf("学号 姓名 语文 数学 英语 物理 平均分\n");
     		printf("%-5d%-4s%-4d%-4d%-4d%-4d%.1lf\n",st[i].num,st[i].name,st[i].yuwen,st[i].shuxue,st[i].yingyu,st[i].wuli,st[i].avr);
		}      //选择要排序的种类
	}
	printf("按照平均分进行排序\n");
	printf("*******************************************************\n");
	//按照平均分从高到低进行排序 
    for(i=0;i<N-1;i++)
		for(j=0;j<N-i-1;j++)
			if(st[j].avr<=st[j+1].avr)
			{
				t=st[j];
				st[j]=st[j+1];
				st[j+1]=t;
			}
	printf("学号 姓名 语文 数学 英语 物理 平均分\n");
	for(i=0;i<N;i++)
	{
		printf("%-5d%-4s%-4d%-4d%-4d%-4d%.1lf\n",st[i].num,st[i].name,st[i].yuwen,st[i].shuxue,st[i].yingyu,st[i].wuli,st[i].avr);
	}
	//不及格的学生
	printf("*******************************************************\n");
    printf("不及格学生名单如下:");
	printf("学号 姓名 语文 数学 英语 物理 平均分\n");
    for(i=0;i<N;i++)
		if(st[i].avr<60.0)
			printf("%-1d\t%s\t%d\t%d\t%d\t%d\t%.1lf\n",st[i].num,st[i].name,st[i].yuwen,st[i].shuxue,st[i].yingyu,st[i].wuli,st[i].avr);

}
