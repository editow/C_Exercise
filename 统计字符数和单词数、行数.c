#include<stdio.h>
#include<ctype.h>			//Ϊisspace()�����ṩԭ��
#include<stdbool.h>			//Ϊbool��true��false�ṩ����
int main(void)
{
	char c;					//�����ַ�
	char prev;				//ǰһ��������ַ�
	long n_chars = 0L;		//�ַ���
	int n_lines = 0;		//����
	int n_words = 0;		//������
	int p_lines = 0;		//������������
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