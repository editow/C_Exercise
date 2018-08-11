#include<string.h>		//将输入字符变成大写字母，并统计符号数目
#include<stdio.h>
#include<ctype.h>
#define SIZE 80
void ToUpper(char *str);
int Count(char *str);
int main()
{
	char str[SIZE];
	int count;
	gets(str);
	ToUpper(str);
	count = Count(str);
	puts(str);
	printf("%d\n", count);
	return 0;
}
void ToUpper(char *str)
{
	while (*str)
	{
		*str = toupper(*str);
		str++;
	}
}
int Count(char *str)
{
	int ct = 0;
	while (*str)
	{
		if (ispunct(*str))
			ct++;
		str++;
	}
	return ct;
}
