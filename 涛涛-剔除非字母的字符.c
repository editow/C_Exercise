#include<stdio.h>
#include<ctype.h>
int main(void)
{
	char ch;						//�޳�����ĸ���ַ�
	while ((ch=getchar())!=EOF)
	{
		if (isalpha(ch))
			putchar(ch);
		if (ch == '\n')
			printf("%c", ch);
	}
    return 0;
}
