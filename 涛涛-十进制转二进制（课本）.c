#include<stdio.h>						//十进制转二进制（课本）
void to_binary(unsigned long n);
int main(void)
{
	unsigned long number;
	printf("输入一个整数(q退出)Enter an integer (q to quit ):\n");
	while (scanf("%ul", &number) == 1)
	{
		printf("等价的二进制数位(Binary equivalent):\n");
		to_binary(number);
		putchar('\n');
		printf("输入一个整数(q退出)(Enter an integer(q to quit )):\n");
	}
	printf("完成了！(Done!)\n");
	return 0;
}
void to_binary(unsigned  long n)
{
	int r;
	r = n % 2;
	if (n >= 2)
		to_binary(n / 2);
	putchar('0' + r);
	return;
}