#include<stdio.h>
#include<ctype.h>
int main(void)
{
	char ch;						//ÌÞ³ý·Ç×ÖÄ¸µÄ×Ö·û
	while ((ch=getchar())!=EOF)
	{
		if (isalpha(ch))
			putchar(ch);
		if (ch == '\n')
			printf("%c", ch);
	}
    return 0;
}
