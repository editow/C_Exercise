#include<stdio.h>						//ʮ����ת�����ƣ��α���
void to_binary(unsigned long n);
int main(void)
{
	unsigned long number;
	printf("����һ������(q�˳�)Enter an integer (q to quit ):\n");
	while (scanf("%ul", &number) == 1)
	{
		printf("�ȼ۵Ķ�������λ(Binary equivalent):\n");
		to_binary(number);
		putchar('\n');
		printf("����һ������(q�˳�)(Enter an integer(q to quit )):\n");
	}
	printf("����ˣ�(Done!)\n");
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