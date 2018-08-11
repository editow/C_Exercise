#include<stdio.h>
int main(void)
{
	int tonight;
	while (scanf("%d", &tonight) != 1)
	{
		scanf("%*s");				//* 是scanf函数中的一种修饰符 表示输入项输入后不转送给任何向量也就相当于跳到了下一个字符串前面 
		printf("integer :\n");
	}
	printf("%d", tonight);
	return 0;
}