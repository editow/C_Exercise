#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
void counter(void);									//1��������
int get_choice(void);								//�޳�������Ҫ����ַ�
void yes_no(void);									//�жϼ������Ƿ���Ҫ����
void shengfa(void);									//2���žų˷��ھ�
double fun(float a, float b, float c);				//3����һԪ���η���
void math_1(void);									//3����һԪ���η���
void math_2(void);									//4����ӡ���
void math_3(void);									//5����׳�
void math_4(void);									//6��������
void math_6(void);									//7�����ַ�ASCII����
void math_8(void);									//8��ͳ�Ƶ�����
void math_9(void);									//9���ж�����
int main()
{
	int integer;
	while ((integer = get_choice()) != 0){
		switch (integer)
		{
		case 1:counter();break;
		case 2:shengfa(); break;
		case 3: math_1(); break;
		case 4:math_2(); break;
		case 5:math_3(); break;
		case 6:math_4(); break;
		case 7:math_6(); break;
		case 8:math_8(); break;
		case 9:math_9(); break;
		default:printf("**û�����ѡ��**:\n");
		}
	}
	printf("\n�����˳�......");
	getche();
	return 0;
}
int get_choice(void)
{
	int ch;
	printf("******************************************************************************\n");
	printf("�˵�:\n");
	printf("1��������\t\t6��������\t \n");
	printf("2���žų˷��ھ�\t\t7�����ַ�ASCII����\n");
	printf("3����һԪ���η���\t8��ͳ�Ƶ�����\t \n");
	printf("4����ӡ���\t\t9���ж�����\t\n");
	printf("5����׳�\t\t0���˳�\t ");
	printf("\n******************************************************************************\n");
	printf("��ѡ������Ҫ�Ĺ���:__\b\b");
	while (scanf("%d", &ch) != 1){
		while ((ch = getchar()) != '\n'){
			continue;
		}
		printf("\n������һ��������ѡ������Ҫ�Ĺ���\n");
		printf("\n******************************************************************************\n");
		printf("�˵�:\n");
		printf("1��������\t\t6��������\t \n");
		printf("2���žų˷��ھ�\t\t7�����ַ�ASCII����\n");
		printf("3����һԪ���η���\t8��ͳ�Ƶ�����\t \n");
		printf("4����ӡ���\t\t9���ж�����\t\n");
		printf("5����׳�\t\t0���˳�\t ");
		printf("\n******************************************************************************\n");
		printf("��ѡ������Ҫ�Ĺ���:__\b\b");
	}
	return ch;
}
void math_4()
{
	char ROWS;
	int i,j,k;
	char get_ch,ch_get;
	printf("\n******************************************************************************\n");
	printf("6��������");
	printf("\n******************************************************************************\n");
loop:
	getchar();
	printf("����������������޺�����(�����ַ�,�磺A��H)��\a\a___\b\b\b");
	scanf("%c %c",&get_ch,&ROWS);
	printf("������������� %c ,������ %c .\n",get_ch,ROWS);
	for(i=get_ch;i<=ROWS;i++){
		for(j=ROWS;j>=i;j--){
			printf(" ");
		}
		for(j=get_ch;j<=2*i-get_ch;j++){
			if(j<=i)
				printf("%c",j);
			if(j>i)
				printf("%c",2*i-j);
		}
		printf("\n");
	}
	yes_no();
	printf("\n******************************************************************************\n");
	printf("�Ƿ������ӡ[y/n]:_\b");
	ch_get = getchar();
	if (ch_get== 'y')
		goto loop;
}
void math_8()
{
	char c,ch;					//�����ַ�
	char prev;				//ǰһ��������ַ�
	long n_chars;		//�ַ���
	int n_lines;		//����
	int n_words;		//������
	int p_lines;		//������������
	bool inword;
	printf("\n******************************************************************************\n");
	printf("8��ͳ�Ƶ�����");
	printf("\n******************************************************************************\n");
loop:
	n_chars = 0L;
	n_lines = n_words = p_lines = 0;
	inword = false;
	printf("����һ�鵥��(Ctrl+z to quit):\n");
	prev = '\n';
	while ((c = getchar()) != EOF){
		n_chars++;
		if (c == '\n')
			n_lines++;
		if (c == ' ')
			p_lines++;
		if (!isspace(c) && !inword)
		{
			inword = true;
			n_words++;
		}
		if (isspace(c) && inword){
			inword = false;
		}
	}
	printf("�ַ����� = %ld,��ĸ���� = %d ,���ʸ��� = %d ,���� = %d .\n ",
		n_chars, n_chars - n_lines - p_lines, n_words, n_lines);
	printf("\n******************************************************************************\n");
	printf("�Ƿ������ӡ[y/n]:_\b");
	ch = getchar();
	if (ch == 'y')
		goto loop;
}
void math_6()
{
	char get_ch,ch;			//��ASCII����
	int count;
	getchar();
	printf("\n******************************************************************************\n");
	printf("7����ASCII����");
	printf("\n******************************************************************************\n");
loop:
	count = 0;
	printf("����ÿ���ַ��������ÿ���ַ�����ASCII�����ʮ����ֵ(��Ctrl+Z��������):\n");
	while ((get_ch = getchar()) != EOF){
		count++;
		if (get_ch == '\n'){
			printf(" \\n=%d\n", get_ch);
			printf("�����������ַ�(��Ctrl+Z��������):\n");
			continue;
		}
		if (get_ch == '\t'){
			printf(" \\t=%d ", get_ch);
			continue;
		}
		if (get_ch == '^A'){
			printf( "^A=%d ",get_ch);
			continue;
		}
		if (get_ch == ' '){
			printf(" ��=%d ", get_ch);
			continue;
		}
		if (count % 10 == 0){
			printf(" %c=%d\n ", get_ch, get_ch);
			count = 0;
			continue;
		}
		printf(" %c=%d ",get_ch, get_ch);
	}
	printf("\n******************************************************************************\n");
	printf("�Ƿ������ӡ[y/n]:_\b");
	ch = getchar();
	if (ch == 'y')
		goto loop;
}
void counter(void)
{
	char ch;
	double x, y;
	printf("\n******************************************************************************\n");
	printf("1����ϲ�����������ҳ��.");
	printf("\n******************************************************************************\n");
	printf("���������ɼ���(+,-,*,/)�ȼ򵥼���\n"\
		"����������Ҫ�������(��2+3):\n");
	scanf("%lf%c%lf", &x, &ch, &y);
	switch (ch)
	{
	case '+':printf("���Ϊ:%.2lf\n", x + y); break;
	case '-':printf("���Ϊ:%.2lf\n", x - y); break;
	case '*':printf("���Ϊ:%.2lf\n", x * y); break;
	case '/':printf("���Ϊ:%.2lf\n", x / y); break;
	}
	yes_no();
	printf("\n******************************************************************************\n");
	printf("�Ƿ��������[y/n]:_\b");
	yes_no();
}
void math_3(void)
{
	double x;
	int y, n;
	char ch;
	printf("\n******************************************************************************\n");
	printf("5����׳�");
	printf("\n******************************************************************************\n");
loop:
	x = y = 1;
	printf("please input  n!:");
	scanf("%d", &n);
	do
	{
		x = x*y;
		y++;
	} while (y <= n);
	printf("%d�Ľ׳�Ϊ%.0lf\n", n, x);
	yes_no();
	printf("\n******************************************************************************\n");
	printf("�Ƿ��������[y/n]:_\b");
	ch = getchar();
	if (ch == 'y')
		goto loop;
}
void yes_no(void)
{
	char ch;
	ch=getchar();
	switch (ch)
	{
	case 'y':counter(); break;
	case 'n': break;
	}
}
void shengfa(void)
{
	int i, j, m;
	char ch;
	printf("\n******************************************************************************\n");
	printf("2���žų˷��ھ���");
	printf("\n******************************************************************************\n");
loop:
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			m = j*i;
			printf("%d*%d=%-2d\t", j, i, m);
		}
		printf("\n");
	}
	yes_no();
	printf("\n******************************************************************************\n");
	printf("�Ƿ�����鿴�ھ���[y/n]:_\b");
	ch = getchar();
	if (ch == 'y')
		goto loop;
}
void math_1(void)
{
	char ch;
	double fun(float a, float b, float c);
	float a, b, c;											//��һԪ���η���
	printf("\n******************************************************************************\n");
	printf("3����һԪ���η���");
	printf("\n******************************************************************************\n");
loop:
	printf("������һԪ���η��̵�a��b��c��");
	scanf("%f %f %f", &a, &b, &c);
	printf("������:%0.1fx^2%+0.1fx%+0.1f=0\n", a, b, c);
	fun(a, b, c);
	yes_no();
	printf("\n******************************************************************************\n");
	printf("�Ƿ��������[y/n]:_\b");
	ch = getchar();
	if (ch == 'y')
		goto loop;
}
double fun(float a, float b, float c)
{
	double x_1, x_2, q;
	q = sqrt(b*b - 4 * a*c);
	if ((b*b - 4 * a*c)<0)
	{
		printf("�����޽�.\n");
	}
	if ((b*b - 4 * a*c)>0)
	{
		x_1 = (-b - q) / 2.0*a;
		x_2 = (-b + q) / 2.0*a;
		printf("�����������⣺\nx_1=%f,x_2=%f\n", x_1, x_2);
	}
	if ((b*b - 4 * a*c) == 0)
	{
		x_1 = (-b) / 2.0*a;
		printf("���̽���һ���⣺\nx_1=x_2=%f\n", x_1);
	}
	return 0;
}
void math_2(void)
{
	char ch;
	int i, j, k, n, m;
	int a1[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	float y, m1, k1;
	printf("\n******************************************************************************\n");
	printf("4����ӡ���");
	printf("\n******************************************************************************\n");
loop:
	printf("�����������꣺");
	scanf("%f", &y);
	n = (int)((y - 1) / 3324);
	m1 = (int)((y - 1) / 100);
	m = (int)(m1 * 3 / 4 + 0.85);
	k1 = (int)(y / 4 * 5 - 0.15) - m - n;
	k = (int)((k1 / 7 - (int)(k1 / 7)) * 7 + 0.5);
	printf("      �� Ԫ%4.0f�� �� ��\n", y);
	for (i = 1; i <= 12; i++)
	{
		n = a1[i - 1];
		if (i == 2 && y == (int)(y / 4) * 4)
		{
			n = 29;
			if (y == (int)(y / 100) * 100 && y != (int)((y / 400) * 400) || y == (int)((y / 3324) * 3324))
				n = 28;
		}
		printf("            %d �� \n", i);
		printf("------------------------------\n");
		printf("  ��  һ  ��  ��  ��  ��  �� \n");
		printf("------------------------------\n");
		for (j = 1; j <= k; j++)
			printf("    ");
		for (j = 1; j <= n; j++)
		{
			printf("%4d", j);
			k += 1;
			if (k>6)
			{
				printf("\n");
				k = 0;
			}
		}
		if (k != 0 || i == 2)
			printf("\n");
		printf("------------------------------\n");
	}
	yes_no();
	printf("\n******************************************************************************\n");
	printf("�Ƿ������ӡ[y/n]:_\b");
	ch = getchar();
	if (ch == 'y')
		goto loop;
}
void math_9(void)
{
	unsigned long num;
	unsigned long div;
	int isPrime;
	char ch;
	printf("\n******************************************************************************\n");
	printf("9���ж�����");
	printf("\n******************************************************************************\n");
loop:
	printf("�������������з���:");
	printf("����q����:");
	while (scanf("%lu", &num) == 1){
		for (div = 2, isPrime = 1; (div*div) <= num; div++){
			if (num%div == 0){
				if ((div*div) != num)
					printf("%lu �ɱ� %lu �� %lu ������ .\n", num, div, num / div);
				else
					printf("%lu �ɱ� %lu ������.\n", num, div);
				isPrime = 0;
			}
		}
		if (isPrime == 1)
			printf("%lu ������ .\n", num);
		printf("������һ���������з���:");
		printf("����q ���� :");
	}
	getchar();
	getchar();
	printf("\n******************************************************************************\n");
	printf("�Ƿ��������[y/n]:_\b");
	ch = getchar();
	if (ch == 'y')
		goto loop;
}