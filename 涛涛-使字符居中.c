#include<stdio.h>									//Ê¹×Ö·û¾ÓÖÐ
#include<string.h>
#define WIDTH 79
#define NAME "My name is CHAN"
#define SPACE ' '
void str_n(char ch, int n);
int main()
{
	int spaces;
	char ch;
	str_n('*', WIDTH);
	putchar('\n');
	str_n(SPACE, (WIDTH - strlen(NAME)) / 2);
	printf("%s\n", NAME);
	str_n('*', WIDTH);
	putchar('\n');
	return 0;
}
void str_n(char ch, int n)
{
	int count;
	for (count = 1; count <= n; count++)
		putchar(ch);
}