#include<stdio.h>
#define LIMIT 3
#define LOWS 3
int main(void)
{
	int i, j;
	double total[3], sum;
	double a[LIMIT][LOWS];
	printf("������һ��%d��%d�е�����ʽ��,������ʾ��\n", LIMIT, LOWS);
	for (i = 0; i < LIMIT; i++)
	{
		for (j = 0; j < LOWS; j++)
			printf("%d%d ", i, j);
		putchar('\n');
	}
	puts("������.");
	for (i = 0; i < LIMIT; i++)
	{
		for (j = 0; j < LOWS; j++)
			scanf("%lf", &a[i][j]);
	}
	total[0] = a[0][0] * (a[1][1] * a[2][2] - a[2][1] * a[1][2]);
	total[1] = a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0]);
	total[2] = a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
	sum = total[0] - total[1] + total[2];
	printf("��������Total = %lf .\n", sum);
	return 0;
}