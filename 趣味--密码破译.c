/*��������*/
#include"stdio.h"
main()
{
	char c;
	printf("������Ӣ����ĸ��");
	while((c=getchar())!='\n')
	{
		if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
		{
			c=c+4;
			if(c>'Z'&&c<='Z'+4||c>'z')
				c=c-26;
		}
		printf("%c\t",c);
	}
}