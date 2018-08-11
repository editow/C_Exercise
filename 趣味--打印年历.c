#include"stdio.h" /*打印年历*/
main()
{
	int i,j,k,n,m;
	int a1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	float y,m1,k1;
	printf("请输入所需年：");
	scanf("%f",&y);
	n=(int)((y-1)/3324);
	m1=(int)((y-1)/100);
	m=(int)(m1*3/4+0.85);
	k1=(int)(y/4*5-0.15)-m-n;
	k=(int)((k1/7-(int)(k1/7))*7+0.5);
	printf("      公 元%4.0f年 日 历\n",y);
	for(i=1;i<=12;i++)
	{
		n=a1[i-1];
		if(i==2&&y==(int)(y/4)*4)
		{
			n=29;
			if(y==(int)(y/100)*100&&y!=(int)((y/400)*400)||y==(int)((y/3324)*3324))
				n=28;
		}
		printf("            %d 月 \n",i);
		printf("------------------------------\n");
		printf("  日  一  二  三  四  五  六 \n");
		printf("------------------------------\n");
		for(j=1;j<=k;j++)
			printf("    ");
		for(j=1;j<=n;j++)
		{
			printf("%4d",j);
			k+=1;
			if(k>6)
			{
				printf("\n");
				k=0;
			}
		}
		if(k!=0||i==2)
			printf("\n");
		printf("------------------------------\n");
	}
}