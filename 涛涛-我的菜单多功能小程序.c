#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
void counter(void);									//1、计算器
int get_choice(void);								//剔除不符合要求的字符
void yes_no(void);									//判断计算器是否需要继续
void shengfa(void);									//2、九九乘法口诀
double fun(float a, float b, float c);				//3、解一元二次方程
void math_1(void);									//3、解一元二次方程
void math_2(void);									//4、打印年份
void math_3(void);									//5、求阶乘
void math_4(void);									//6、金字塔
void math_6(void);									//7、求字符ASCII编码
void math_8(void);									//8、统计单词数
void math_9(void);									//9、判断素数
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
		default:printf("**没有这个选项**:\n");
		}
	}
	printf("\n正在退出......");
	getche();
	return 0;
}
int get_choice(void)
{
	int ch;
	printf("******************************************************************************\n");
	printf("菜单:\n");
	printf("1、计算器\t\t6、金字塔\t \n");
	printf("2、九九乘法口诀\t\t7、求字符ASCII编码\n");
	printf("3、解一元二次方程\t8、统计单词数\t \n");
	printf("4、打印年份\t\t9、判断素数\t\n");
	printf("5、求阶乘\t\t0、退出\t ");
	printf("\n******************************************************************************\n");
	printf("请选择您需要的功能:__\b\b");
	while (scanf("%d", &ch) != 1){
		while ((ch = getchar()) != '\n'){
			continue;
		}
		printf("\n请输入一个整数且选择您需要的功能\n");
		printf("\n******************************************************************************\n");
		printf("菜单:\n");
		printf("1、计算器\t\t6、金字塔\t \n");
		printf("2、九九乘法口诀\t\t7、求字符ASCII编码\n");
		printf("3、解一元二次方程\t8、统计单词数\t \n");
		printf("4、打印年份\t\t9、判断素数\t\n");
		printf("5、求阶乘\t\t0、退出\t ");
		printf("\n******************************************************************************\n");
		printf("请选择您需要的功能:__\b\b");
	}
	return ch;
}
void math_4()
{
	char ROWS;
	int i,j,k;
	char get_ch,ch_get;
	printf("\n******************************************************************************\n");
	printf("6、金字塔");
	printf("\n******************************************************************************\n");
loop:
	getchar();
	printf("请输入金字塔的上限和下限(仅限字符,如：A和H)：\a\a___\b\b\b");
	scanf("%c %c",&get_ch,&ROWS);
	printf("您输入的上限是 %c ,下限是 %c .\n",get_ch,ROWS);
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
	printf("是否继续打印[y/n]:_\b");
	ch_get = getchar();
	if (ch_get== 'y')
		goto loop;
}
void math_8()
{
	char c,ch;					//读入字符
	char prev;				//前一个读入的字符
	long n_chars;		//字符数
	int n_lines;		//行数
	int n_words;		//单词数
	int p_lines;		//不完整的行数
	bool inword;
	printf("\n******************************************************************************\n");
	printf("8、统计单词数");
	printf("\n******************************************************************************\n");
loop:
	n_chars = 0L;
	n_lines = n_words = p_lines = 0;
	inword = false;
	printf("输入一组单词(Ctrl+z to quit):\n");
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
	printf("字符个数 = %ld,字母个数 = %d ,单词个数 = %d ,行数 = %d .\n ",
		n_chars, n_chars - n_lines - p_lines, n_words, n_lines);
	printf("\n******************************************************************************\n");
	printf("是否继续打印[y/n]:_\b");
	ch = getchar();
	if (ch == 'y')
		goto loop;
}
void math_6()
{
	char get_ch,ch;			//求ASCII编码
	int count;
	getchar();
	printf("\n******************************************************************************\n");
	printf("7、求ASCII编码");
	printf("\n******************************************************************************\n");
loop:
	count = 0;
	printf("输入每个字符，则输出每个字符及其ASCII编码的十进制值(按Ctrl+Z结束程序):\n");
	while ((get_ch = getchar()) != EOF){
		count++;
		if (get_ch == '\n'){
			printf(" \\n=%d\n", get_ch);
			printf("请输入下组字符(按Ctrl+Z结束程序):\n");
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
			printf(" 空=%d ", get_ch);
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
	printf("是否继续打印[y/n]:_\b");
	ch = getchar();
	if (ch == 'y')
		goto loop;
}
void counter(void)
{
	char ch;
	double x, y;
	printf("\n******************************************************************************\n");
	printf("1、恭喜您进入计算器页面.");
	printf("\n******************************************************************************\n");
	printf("本计算器可计算(+,-,*,/)等简单计算\n"\
		"请输入您需要计算的数(如2+3):\n");
	scanf("%lf%c%lf", &x, &ch, &y);
	switch (ch)
	{
	case '+':printf("结果为:%.2lf\n", x + y); break;
	case '-':printf("结果为:%.2lf\n", x - y); break;
	case '*':printf("结果为:%.2lf\n", x * y); break;
	case '/':printf("结果为:%.2lf\n", x / y); break;
	}
	yes_no();
	printf("\n******************************************************************************\n");
	printf("是否继续计算[y/n]:_\b");
	yes_no();
}
void math_3(void)
{
	double x;
	int y, n;
	char ch;
	printf("\n******************************************************************************\n");
	printf("5、求阶乘");
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
	printf("%d的阶乘为%.0lf\n", n, x);
	yes_no();
	printf("\n******************************************************************************\n");
	printf("是否继续计算[y/n]:_\b");
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
	printf("2、九九乘法口诀表");
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
	printf("是否继续查看口诀表[y/n]:_\b");
	ch = getchar();
	if (ch == 'y')
		goto loop;
}
void math_1(void)
{
	char ch;
	double fun(float a, float b, float c);
	float a, b, c;											//解一元二次方程
	printf("\n******************************************************************************\n");
	printf("3、解一元二次方程");
	printf("\n******************************************************************************\n");
loop:
	printf("请输入一元二次方程的a，b，c：");
	scanf("%f %f %f", &a, &b, &c);
	printf("方程是:%0.1fx^2%+0.1fx%+0.1f=0\n", a, b, c);
	fun(a, b, c);
	yes_no();
	printf("\n******************************************************************************\n");
	printf("是否继续计算[y/n]:_\b");
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
		printf("方程无解.\n");
	}
	if ((b*b - 4 * a*c)>0)
	{
		x_1 = (-b - q) / 2.0*a;
		x_2 = (-b + q) / 2.0*a;
		printf("方程有两个解：\nx_1=%f,x_2=%f\n", x_1, x_2);
	}
	if ((b*b - 4 * a*c) == 0)
	{
		x_1 = (-b) / 2.0*a;
		printf("方程仅有一个解：\nx_1=x_2=%f\n", x_1);
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
	printf("4、打印年份");
	printf("\n******************************************************************************\n");
loop:
	printf("请输入所需年：");
	scanf("%f", &y);
	n = (int)((y - 1) / 3324);
	m1 = (int)((y - 1) / 100);
	m = (int)(m1 * 3 / 4 + 0.85);
	k1 = (int)(y / 4 * 5 - 0.15) - m - n;
	k = (int)((k1 / 7 - (int)(k1 / 7)) * 7 + 0.5);
	printf("      公 元%4.0f年 日 历\n", y);
	for (i = 1; i <= 12; i++)
	{
		n = a1[i - 1];
		if (i == 2 && y == (int)(y / 4) * 4)
		{
			n = 29;
			if (y == (int)(y / 100) * 100 && y != (int)((y / 400) * 400) || y == (int)((y / 3324) * 3324))
				n = 28;
		}
		printf("            %d 月 \n", i);
		printf("------------------------------\n");
		printf("  日  一  二  三  四  五  六 \n");
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
	printf("是否继续打印[y/n]:_\b");
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
	printf("9、判断素数");
	printf("\n******************************************************************************\n");
loop:
	printf("请输入整数进行分析:");
	printf("键入q结束:");
	while (scanf("%lu", &num) == 1){
		for (div = 2, isPrime = 1; (div*div) <= num; div++){
			if (num%div == 0){
				if ((div*div) != num)
					printf("%lu 可被 %lu 和 %lu 除尽的 .\n", num, div, num / div);
				else
					printf("%lu 可被 %lu 除尽的.\n", num, div);
				isPrime = 0;
			}
		}
		if (isPrime == 1)
			printf("%lu 是素数 .\n", num);
		printf("请输入一个整数进行分析:");
		printf("键入q 结束 :");
	}
	getchar();
	getchar();
	printf("\n******************************************************************************\n");
	printf("是否继续分析[y/n]:_\b");
	ch = getchar();
	if (ch == 'y')
		goto loop;
}