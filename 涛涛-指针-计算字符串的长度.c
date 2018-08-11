#include<stdio.h>
#define SIZE 81
int strleng(char *str);
int main()
{
	int i;
	char str[SIZE];
	gets(str);
	i = strleng(str);
	printf("%d\n", i);
	return 0;
}
int strleng(char *str)
{
	int count = 0;
	while (*str++)
		count++;
	return count;
}