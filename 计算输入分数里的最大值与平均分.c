#include<stdio.h>
int main()
{
	const float MIN=0.0f;
	const float MAX=100.0f;
	int n=0;
	float min=100.0f;
	float max=0.0f;
	float score,total=0;
	printf("���������ķ�����q to quit����\n");
	while(scanf("%f",&score)==1){
		if(score<MIN||score>MAX){
			printf("���������Ϊ%.1f,����һ��:\n",score);
			continue;
		}
		n++;
		printf("%d.���������Ϊ%.1f.\n",n,score);
		min=(score<min)?score:min;
		max=(score>max)?score:max;
		total+=score;
		printf("�ٴ�������ķ���(q to quit):\n");
	}
	if(n>0)
	{
		printf("%.2f��%d�ε�ƽ����Ϊ%.2f\n",total,n,total/n);
		printf("���ֵ�� %.1f,��Сֵ��%.1f .\n",max,min);
	}
	else
		printf("û�з��� ������\n");
	return 0;
}