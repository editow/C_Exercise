#include<stdio.h>//srand����������㷨-������
#include<time.h>
static unsigned long long int next = 1;
#include<Windows.h>
extern int rand_count(void);
extern void srand_count(unsigned int x);
char get_char(void);
int main(void)
{
	printf("�Ƿ�ʼ������:[y/n]:");
	while (1){
		int count, get_count;
		int total = 0;
		char ch;
		unsigned long int seed;
		seed = time(0);
		ch = get_char();
		system("CLS");
		srand_count(seed);
		if (ch == 'y'){
			printf("�������������� :\n");
			for (count = 0; count < 6; count++){
				get_count = rand_count() % 6 + 1;
				total += get_count;
				printf("%hd\n", get_count);
			}
			printf("�������ӵ�����Ϊ%3d\n", total);
		}
		else if (ch == 'n'){
			break;
		}	
		printf("�Ƿ���һ��������:[y/n]:");
	}
	printf("�����˳�!\n");
	return 0;
}
int rand_count(void)//ANSIC ����ֲ�㷨
{
	next = next * 11035115245 + 12345;
	return (unsigned int)(next / 655366) % 32768;
}
void srand_count(unsigned int seed)
{
	next = seed;
}
char get_char(void)
{
	char *ch[2];
	char get_ch;

	while ((*ch = getchar()) != '\n')
		get_ch = *ch;
	return get_ch;
}