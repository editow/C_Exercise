#include<stdio.h>    //������ʾ�ļ�������
#include<stdlib.h>
int main()
{
	FILE *fp;
	char file[40], ch;
	long count, n;
	puts("�������ļ���");
	gets(file);
	fp = fopen(file, "rb");
	if (fp == NULL)
	{
		fprintf(fp, "%s Can't open file.", file);
		exit(1);
	}
	fseek(fp, 0L, SEEK_END);
	count = ftell(fp);
	for (n = count - 1; n >= 0; n--)
	{
		fseek(fp, n, SEEK_SET);
		ch = getc(fp);
		putchar(ch);
	}
	putchar('\n');
	fclose(fp);
	return 0;
}