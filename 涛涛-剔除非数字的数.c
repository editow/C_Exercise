#include<stdio.h>
long fun(int n);
long refun(int n);
int main(void)
{
	int n;
	while (scanf("%d", &n) == 0)
	{
		while (getchar(n) != '\n'){
			continue;
		}
		printf("请输入一个整数:");
	}
	printf("%d\n", n);
	return 0;
}