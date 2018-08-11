#include<stdio.h>			//字母排序
#include<stdlib.h>
#include<string.h>
#define SIZE 82
#define LIM 20
void stsrt(char *strings[], int num);
void menu(void);
int main()
{
	system("title 简易排序字母 ——涛涛制作");//设置标题
	system("mode con cols=90 lines=32");//设置窗口大小
	system("color 2b");//设置颜色
	menu();
	return 0;
}
void stsrt(char *strings[], int num)
{
	char *temp;
	int top, seek;
	for (top = 0; top < num - 1; top++)
	for (seek = top + 1; seek < num; seek++)
	{
		if (strcmp(strings[top], strings[seek])>0)
		{
			temp = strings[top];
			strings[top] = strings[seek];
			strings[seek] = temp;
		}
		printf("[%d][%d] [%s]\n", top, seek, strings[seek]);
	}
}
void menu(void)
{
	while (1){
		char input[LIM][SIZE];
		char *ptstr[LIM];
		int ct = 0;
		int k;
		printf("Input up to %d lines,and I will sort them .\n", LIM);
		while (ct < LIM&&gets(input[ct]) != NULL&&input[ct][0] != '\0')
		{
			ptstr[ct] = input[ct];
			ct++;
		}
		stsrt(ptstr, ct);
		puts("\nHere's the sorted list:\n");
		for (k = 0; k < ct; k++)
			puts(*(ptstr + k));
		system("pause");
		system("CLS");
	}
}