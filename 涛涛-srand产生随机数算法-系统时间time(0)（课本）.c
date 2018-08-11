#include<stdio.h>//产生随机数算法-系统时间time(0);
#include<time.h>
#include<Windows.h>
static unsigned long long int next = 1;
extern int rand_count(void);
extern void srand_count(unsigned int x);
int main(void)
{
	while (1){
		int count;
		unsigned long int seed;
		seed = time(0);
		srand_count(seed);
		for (count = 0; count < 10; count++)
			printf("%hd\n", rand_count()%5);
		printf("Done!");
		system("pause");
		system("CLS");
	}
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
