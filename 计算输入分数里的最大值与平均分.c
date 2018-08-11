#include<stdio.h>
int main()
{
	const float MIN=0.0f;
	const float MAX=100.0f;
	int n=0;
	float min=100.0f;
	float max=0.0f;
	float score,total=0;
	printf("请输入您的分数（q to quit）：\n");
	while(scanf("%f",&score)==1){
		if(score<MIN||score>MAX){
			printf("您输入的数为%.1f,再试一次:\n",score);
			continue;
		}
		n++;
		printf("%d.您输入的数为%.1f.\n",n,score);
		min=(score<min)?score:min;
		max=(score>max)?score:max;
		total+=score;
		printf("再次输入你的分数(q to quit):\n");
	}
	if(n>0)
	{
		printf("%.2f在%d次的平均数为%.2f\n",total,n,total/n);
		printf("最大值是 %.1f,最小值是%.1f .\n",max,min);
	}
	else
		printf("没有分数 结束。\n");
	return 0;
}