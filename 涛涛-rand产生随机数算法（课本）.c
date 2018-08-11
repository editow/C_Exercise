#include<stdio.h>//产生随机数算法
static unsigned long int next = 0;
int rand_count(void);
int main(void)
{
	int count;
	for (count = 0; count < 10; count++)
		printf("%hd\n", rand_count()%5);
	return 0;
}
int rand_count(void)//ANSIC 可移植算法
{
	next = next * 11035115245 + 12345;
	return (unsigned int)(next / 655366) % 32768;
}