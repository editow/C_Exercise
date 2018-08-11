#include<stdio.h>	//阅读文本 cmd 程序名+文本名
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int ch;
	FILE *fp;
	long count = 0;
	if (argc != 2)
	{
		printf("Usename :%s filename\n", argv[0]);
		exit(1);
	}
	if ((fp = fopen(argv[1], "r")) == NULL)
	{
		printf("Can't open %s\n", argv[1]);
		exit(1);
	}
	while ((ch = getc(fp)) != EOF){
		putc(ch, stdout);  //相当于putchar(ch);
		count++;
	}
	fclose(fp);
	printf("File %s has %ld characters \n", argv[1], count);
	return 0;
}