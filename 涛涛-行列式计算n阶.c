#include<stdio.h>
#include<stdlib.h>
void neum(void);
int main(void)
{
	neum();
	int z, r, j, i;
	double a[20][20], m = 1.0, k;
	printf("���������:");
	scanf("%d", &r);
	printf("����������\n");
	for (i = 0; i<r; i++)
	for (j = 0; j<r; j++)
		scanf("%lf", &a[i][j]);
	for (z = 0; z<r - 1; z++)
	for (i = z; i<r - 1; i++)
	{
		if (a[z][z] == 0)
		for (i = z; a[z][z] == 0; i++)
		{
			{
				for (j = 0; j<r; j++)
				a[z][j] = a[z][j] + a[i + 1][j];
			}
			if (a[z][z] != 0)break;
		}
		{
			k = -a[i + 1][z] / a[z][z];
			for (j = z; j<r; j++)
				a[i + 1][j] = k*(a[z][j]) + a[i + 1][j];
		}
	}
	for (z = 0; z<r; z++)
		m = m*(a[z][z]);
	printf("%f", m);
	return 0;
}
void neum(void)
{
	system("title ��������ʽ���� ����������������");//���ñ���
	system("mode con cols=60 lines=20");//���ô��ڴ�С
	system("color 02");//������ɫ
	//system("pause");  //��ͣ����
	system("CLS");//��������
}