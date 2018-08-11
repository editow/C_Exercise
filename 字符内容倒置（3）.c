#include<stdio.h>
void fun();
int main()
{
	fun();
	printf("\n");
	getchar();
	printf("按回车键结束......");
	getchar();
	return 0;
}
void fun()
{
	char ch,str[80];
	int i=0;
	printf("请输入一组单词或字母：\n");
	while((ch=getchar())!='\n')
		str[i++]=ch;
	i--;
	while(i>=0)
		printf("%c",str[i--]);
}