#include<stdio.h>						//ì³²¨ÄÇÆõÊıÁĞ
#define SIZE 12
int main()
{
	int i=2;
	int j;
	long double sum[SIZE] = { 1, 1 };
	while (i < SIZE)
	{
		sum[i] = sum[i - 1] + sum[i - 2];
		i++;
	}
	for (j = 0; j < SIZE; j++)
		printf(" %.0lf\n", sum[j]);
	return 0;
}