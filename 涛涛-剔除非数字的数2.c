#include<stdio.h>
int main(void)
{
	int tonight;
	while (scanf("%d", &tonight) != 1)
	{
		scanf("%*s");				//* ��scanf�����е�һ�����η� ��ʾ�����������ת�͸��κ�����Ҳ���൱����������һ���ַ���ǰ�� 
		printf("integer :\n");
	}
	printf("%d", tonight);
	return 0;
}