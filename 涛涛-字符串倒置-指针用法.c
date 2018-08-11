#include<stdio.h>		//×Ö·û´®µ¹ÖÃps:Ö¸ÕëÓÃ·¨
char *putr(char *str);
int main()
{
	char str[80];
	gets(str);
	putr(str);
	return 0;
}
char *putr(char *str)
{
	char *pc = str;
	while (*pc)
		*pc++;
	while (pc - str)
		putchar(*--pc);
	putchar('\n');
	return (pc);
}