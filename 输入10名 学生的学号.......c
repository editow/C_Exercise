#include"stdio.h"
#include"string.h"
#define N 10          //����ѧ������
struct student        //ѧ���Ľṹ��
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
	struct student t;         //���ں������ð������ʱ���м����
	int i,j,num;
	printf("������%d��ѧ���������Ϣ:\n",N);
	printf("*****************************************************\n");
	printf("ѧ�� ���� ���� ��ѧ Ӣ�� ����\n");
	for(i=0;i<N;i++)
		scanf("%d%s%d%d%d%d",&st[i].num,&st[i].name,&st[i].yuwen,&st[i].shuxue,&st[i].yingyu,&st[i].wuli);
	printf("*****************************************************\n");
	printf("ѧ�� ���� ���� ��ѧ Ӣ�� ���� ƽ����\n");
	for(i=0;i<N;i++)
	{
		st[i].avr=(st[i].yuwen+st[i].shuxue+st[i].yingyu+st[i].wuli)/4.0;
		printf("%-5d%-4s%-4d%-4d%-4d%-4d%.1lf",st[i].num,st[i].name,st[i].yuwen,st[i].shuxue,st[i].yingyu,st[i].wuli,st[i].avr);
		printf("\n");
	}
	printf("����Ҫ��ѯѧ����ѧ��\n");
	scanf("%d",&num);
	for(i=0;i<N;i++)
	{
		if(st[i].num==num)
		{
			printf("ѧ�� ���� ���� ��ѧ Ӣ�� ���� ƽ����\n");
     		printf("%-5d%-4s%-4d%-4d%-4d%-4d%.1lf\n",st[i].num,st[i].name,st[i].yuwen,st[i].shuxue,st[i].yingyu,st[i].wuli,st[i].avr);
		}      //ѡ��Ҫ���������
	}
	printf("����ƽ���ֽ�������\n");
	printf("*******************************************************\n");
	//����ƽ���ִӸߵ��ͽ������� 
    for(i=0;i<N-1;i++)
		for(j=0;j<N-i-1;j++)
			if(st[j].avr<=st[j+1].avr)
			{
				t=st[j];
				st[j]=st[j+1];
				st[j+1]=t;
			}
	printf("ѧ�� ���� ���� ��ѧ Ӣ�� ���� ƽ����\n");
	for(i=0;i<N;i++)
	{
		printf("%-5d%-4s%-4d%-4d%-4d%-4d%.1lf\n",st[i].num,st[i].name,st[i].yuwen,st[i].shuxue,st[i].yingyu,st[i].wuli,st[i].avr);
	}
	//�������ѧ��
	printf("*******************************************************\n");
    printf("������ѧ����������:");
	printf("ѧ�� ���� ���� ��ѧ Ӣ�� ���� ƽ����\n");
    for(i=0;i<N;i++)
		if(st[i].avr<60.0)
			printf("%-1d\t%s\t%d\t%d\t%d\t%d\t%.1lf\n",st[i].num,st[i].name,st[i].yuwen,st[i].shuxue,st[i].yingyu,st[i].wuli,st[i].avr);

}
