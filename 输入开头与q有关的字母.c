#include<stdio.h>		//输入开头与q有关的字母
#include<string.h>
#define SIZE 40
#define LIM 5
int main()
{
	char qword[LIM][SIZE];
	char temp[SIZE];
	int i = 0;
	while (i < LIM&&gets(temp))
	{
		if (temp[0] != 'q')
			printf("%s doesn't with q\n", temp);
		else
		{
			strcpy(qword[i], temp);
			i++;
		}
	}
	printf("accept with q\n");
	for (i = 0; i < LIM; i++)
		printf("%s\n", qword[i]);
	return 0;
}