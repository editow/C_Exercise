#include<stdio.h>
#include<stdbool.h>
int get_int(void);											//ȷ������һ������
bool bad_limits(int begin, int end, int low, int high);		//ȷ����Χ�����½��Ƿ���Ч
double sum_square(int a, int b);							//����a��b֮�������ƽ����
int main()
{
	const int MIN = -1000;									//��Χ���½�����
	const int MAX = +1000;									//��Χ���Ͻ�����
	int start;												//��Χ���Ͻ�
	int stop;												//��Χ���½�
	double answer;
	printf("This program computes the sum of the squares of "\
		"integers in a range.\nThe lower bound should not "\
		"be lessthan -1000.\nEnter the upper bound should not "\
		"both limits to quit):\nlower limit:\n");
	start = get_int();
	printf("upper limit :");
	stop = get_int();
	while (start != 0 || stop != 0){
		if(bad_limits(start, stop, MIN, MAX))
			printf("Please try again .\n");
		else
		{
			answer = sum_square(start, stop);
			printf("The sum of the squares of the integers from "\
				"\nfrom %d to %d is %g  \n", start, stop, answer);
		}
		printf("Enter the limits (enter 0 for both limits to quit):\n");
		printf("lower limit :\n");
		start = get_int();
		printf("upper limit:\n");
		stop = get_int();
	}
	printf("Done !");
	return 0;
}
double sum_square(int a, int b)
{
	double total = 0;
	int i;
	for (i = a; i <= b; i++)
		total += i*i;
	return total;
}
bool bad_limits(int begin, int end, int low, int high)
{
	bool not_good = false;
	if (begin > end){
		printf("%d isn't smaller than %d .\n", begin, end);
		not_good = true;
	}
	if (begin < low || end < low)
	{
		printf("Values must be %d or greater.\n", low);
		not_good = true;
	}
	if (begin > high || end > high){
		printf("Values must be %d or less.\n", high);
		not_good = true;
	}
	return not_good;
}
int get_int(void)
{
	int input;
	char ch;
	while (scanf("%d", &input) == 0)
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);									//�޳���������� 
		printf(" is not an integer .\nPlease enter an \ninter value ,such as 25,-178,or 3:\n");
	}
	return input;
}