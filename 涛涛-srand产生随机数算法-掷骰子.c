#include<stdio.h>//srand产生随机数算法-掷骰子
#include<time.h>
static unsigned long long int next = 1;
#include<Windows.h>
extern int rand_count(void);
extern void srand_count(unsigned int x);
char get_char(void);
int main(void)
{
	printf("是否开始掷骰子:[y/n]:");
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
			printf("您掷的骰子如下 :\n");
			for (count = 0; count < 6; count++){
				get_count = rand_count() % 6 + 1;
				total += get_count;
				printf("%hd\n", get_count);
			}
			printf("您掷骰子的总数为%3d\n", total);
		}
		else if (ch == 'n'){
			break;
		}	
		printf("是否再一次掷骰子:[y/n]:");
	}
	printf("您已退出!\n");
	return 0;
}
int rand_count(void)//ANSIC 可移植算法
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