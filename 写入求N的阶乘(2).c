#include<stdio.h>
long fun(int n);
long refun(int n);
int main(void)
{
	int num;
	printf("calculates factorials.\n");
	printf("Please enter a number:");
	while (scanf("%d", &num) == 1)
	{
		if (num < 0)
			printf("�׳�û�и���.\n");
		else if (num>12)
			printf("���ܹ�����12\n");
		else
		{
			printf("ѭ��:%d�Ľ׳���%ld.\n", num, fun(num));
			printf("�ݹ�:%d�Ľ׳���%ld.\n", num, refun(num));
			printf("calculates factorials.\n");
			printf("Please enter a number:");
		}
	}
	return 0;
}
long fun(int n)
{
	int sum;
	for (sum = 1; n>0; n--)
		sum *= n;
	return sum;
}
long refun(int n)
{
	int kun=0;
	if (n <= 0)
		kun = 1;
	else
		 kun = n* refun(n - 1);
	return kun;
}