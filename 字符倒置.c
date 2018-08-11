#include"stdio.h"
#include"string.h"
main()
{
	char str[50],str1[50];
	int u,i;
	printf("请输入s中的字符：");
	gets(str);
	u=strlen(str);
	printf("s倒置前:");
	puts(str);
	for(i=0;i<=u;i++)
	{
		str1[i]=str[i];
	}
	printf("s倒置后:");
	for(i=u-1;i>=0;i--)
	{
		printf("%c",str1[i]);
	}
	printf("\n");
}
