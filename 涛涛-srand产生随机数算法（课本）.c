#include<stdio.h>//产生随机数算法
static unsigned long long int next = 1;
extern int rand_count(void);
extern void srand_count(unsigned int x);
int main(void)
{
	int count;
	unsigned seed;
	printf("Please enter your choice for seed.\n");
	while (scanf("%u", &seed) == 1)
	{
		srand_count(seed);
		for (count = 0; count < 10; count++)
			printf("%hd\n", rand_count()%5);
		printf("Please input next seed(q to quit):");
	}
	printf("Done!");
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
