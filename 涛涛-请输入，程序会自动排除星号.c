#include<stdio.h>
#include<stdlib.h>
#define N 81
void fun(char a[]);
int main()
{
	char a[N];
	puts("�����룬������Զ��ų�*��");
	gets(a);
	fun(a);
	puts(a);
	system("pause");
	return 0;
}
void fun(char a[])
{
	char *b = a;
	int i = 0;
	while (*b){
		while (*(b++) != '*'){
			a[i++] = *(b - 1);
			break;
		}
	}
	a[i] = '\0';
}