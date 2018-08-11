#include<string.h>
#include<stdio.h>						//十进制转二、八进制（课本）
#define WIDTH 79
#define SPACE ' '
#define HEAD "请输入一个十进制数(q退出)Enter an integer (q to quit ).\n"
#define HEAD_8 "等价的八进制数位(Binary equivalent).\n"
#define HEAD_2 "等价的二进制数位(Binary equivalent).\n"
void show_n(char ch, int n);
void to_binary_2(unsigned long n);
void to_binary_8(unsigned  long n);
int main(void)
{
	unsigned long number;
	show_n('*', WIDTH); putchar('\n');
	printf("%s", HEAD); putchar('\n');
	show_n('*', WIDTH); putchar('\n');
	while (scanf("%ul", &number) == 1)
	{
		show_n('*', WIDTH); putchar('\n');
		printf("%s", HEAD_8); 
		show_n('*', WIDTH); putchar('\n');
		to_binary_8(number);
		putchar('\n');
		show_n('*', WIDTH); putchar('\n');
		printf("%s", HEAD_2); 
		show_n('*', WIDTH); putchar('\n');
		to_binary_2(number);
		putchar('\n');
		show_n('*', WIDTH); putchar('\n');
		show_n(SPACE, (WIDTH - strlen(HEAD)) / 2);
		printf("%s", HEAD); putchar('\n');
		show_n('*', WIDTH); putchar('\n');
	}
	show_n('*', WIDTH); putchar('\n');
	printf("完成了！(Done!)\n");
	return 0;
}
void show_n(char ch, int n)
{
	int count;
	for (count = 1; count <= n; count++)
		putchar(ch);
}
void to_binary_8(unsigned  long n)
{
	unsigned long r;
	r = n % 8;
	if (n >= 8)
		to_binary_8(n / 8);
	putchar('0' + r);
	return;
}
void to_binary_2(unsigned  long n)
{
	unsigned long r;
	r = n % 2;
	if (n >= 2)
		to_binary_2(n / 2);
	putchar('0' + r);
	return;
}
