#include<stdio.h>
#include<string.h>			//����strlen(),strcpy()������
#define SIZE 81				//�������鳤��
char *ChoiceMonth(int n);   //ѡ���·�
char *substr(char *from, char *to, char *text);//���ã�����text:abbcdef to: b from: g�����aggcdef
int GetNumber(void);		// �ų������ֵ�����,�õ�����1~12֮��
int main(void)
{
	int n;
	char str_one[SIZE],str_two[SIZE];
	n = GetNumber();
	strcpy(str_one,ChoiceMonth(n));
	puts(str_one);
	strcpy(str_two, substr("g", "b", "abbcdef"));
	puts(str_two);
	return 0;
}
int GetNumber(void)
{
	int n;
	while (1)
	{
		printf("Please input Months number(1<=Number<=12)\n");
		while (scanf("%d", &n) != 1){
			getchar();
			break;
		}
		if (n >= 1 && n <= 12)
			break;
	}
	return n;
}
char *ChoiceMonth(int n)
{
	char str[SIZE];
	switch (n)
	{
	case 1:strcpy(str, "one yue"); break;
	case 2:strcpy(str, "two yue"); break;
	case 3:strcpy(str, "three yue"); break;
	case 4:strcpy(str, "four yue"); break;
	case 5:strcpy(str, "five yue"); break;
	case 6:strcpy(str, "six  yue"); break;
	case 7:strcpy(str, "seven yue"); break;
	case 8:strcpy(str, "eight yue"); break;
	case 9:strcpy(str, "night yue"); break;
	case 10:strcpy(str, "ten yue"); break;
	case 11:strcpy(str, "eleven yue"); break;
	case 12:strcpy(str, "twelve yue"); break;
	}
	return str;			//����ѡ���·ݵĵ�ַ
}
char *substr(char *from, char *to, char *text)
{
	int index;			//����
	char copytext[SIZE];//����text���ַ���
	int length;			//����ַ����ĳ���
	strcpy(copytext, text);
	length = strlen(copytext);
	for (index = 0; index < length; index++){
		if (copytext[index] == *to)
			copytext[index] = *from;
	}
	return copytext;		//��������ĵ�ַ
}