#include<stdio.h>
#include<string.h>									//斐波纳契数列
#define WIDTH_1 79
#define WIDTH_2 "**斐波纳契数列：需要计算后一项与前一项相加 请输入个数( q 退出)**"
#define WIDTH_3 "**警告：请输入大于 0 且小于 1477 的数**"
#define SPACE ' '
void title_1(void);
void title_2(void);
void show_n(char ch, int n);
int main()
{
	unsigned long num,i;
	long double sum, a, b;
	title_1();
	while (scanf("%ul", &num) == 1){
		if (num < 1477 && num > 0)
		{
		for (i = b = a = 1; i <= num; i++){
				if (i == 1 || i == 2)
				{
					sum = 1;
					printf("| 第%-3d次与前两项相加：%-*.0lf \n", i, 50, sum);
					continue;
				}
				sum = a + b;
				if (i % 2)
					a = sum;
				else
					b = sum;
				printf("| 第%-3d次与前两项相加：%-*.0lf \n", i, 50, sum);
		}
		}
		else{
			title_2();
		}
		title_1();
	}
	return 0;
}
void show_n(char ch, int n)
{
	int count;
	for (count = 1; count <= n; count++)
		putchar(ch);
	return;
}
void title_1(void)
{
	show_n('*', WIDTH_1); putchar('\n');
	show_n(SPACE, (WIDTH_1 - strlen(WIDTH_2)) / 2);
	show_n('*', strlen(WIDTH_2)); putchar('\n');
	show_n(SPACE, (WIDTH_1 - strlen(WIDTH_2)) / 2);
	printf("%s\n", WIDTH_2);
	show_n(SPACE, (WIDTH_1 - strlen(WIDTH_2)) / 2);
	show_n('*', strlen(WIDTH_2)); putchar('\n');
	show_n('*', WIDTH_1); putchar('\n');
}
void title_2(void)
{
	show_n(SPACE, (WIDTH_1 - strlen(WIDTH_3)) / 2);
	show_n('*', strlen(WIDTH_3)); putchar('\n');
	show_n(SPACE, (WIDTH_1 - strlen(WIDTH_3)) / 2);
	printf("%s\a\a\a\a\a\a\n", WIDTH_3);
	show_n(SPACE, (WIDTH_1 - strlen(WIDTH_3)) / 2);
	show_n('*', strlen(WIDTH_3)); putchar('\n');
}