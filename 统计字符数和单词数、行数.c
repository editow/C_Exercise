#include<stdio.h>
#include<ctype.h>			//为isspace()函数提供原型
#include<stdbool.h>			//为bool、true和false提供定义
int main(void)
{
	char c;					//读入字符
	char prev;				//前一个读入的字符
	long n_chars = 0L;		//字符数
	int n_lines = 0;		//行数
	int n_words = 0;		//单词数
	int p_lines = 0;		//不完整的行数
	bool inword = false;
	printf("Enter text to be analyzed(Ctrl+z to quit):\n");
	prev = '\n';
	while ((c = getchar()) != EOF){
		n_chars++;
		if (c == '\n')
			n_lines++;
		if (c == ' ')
			p_lines++;
		if (!isspace(c) && !inword)
		{
			inword = true;
			n_words++;
		}
		if (isspace(c) && inword){
			inword = false;
		}
	}
	printf("Characters = %ld,Words Characters = %d ,Words = %d ,Lines = %d .\n ",
		n_chars,n_chars-n_lines-p_lines, n_words, n_lines);
	return 0;
}