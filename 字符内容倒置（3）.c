#include<stdio.h>
void fun();
int main()
{
	fun();
	printf("\n");
	getchar();
	printf("���س�������......");
	getchar();
	return 0;
}
void fun()
{
	char ch,str[80];
	int i=0;
	printf("������һ�鵥�ʻ���ĸ��\n");
	while((ch=getchar())!='\n')
		str[i++]=ch;
	i--;
	while(i>=0)
		printf("%c",str[i--]);
}