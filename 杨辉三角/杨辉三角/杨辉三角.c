#include<stdio.h>
#include<stdlib.h>
#define row 10
//��ӡ�������
//1				n=0
//1 1			n=1
//1 2 1			n=2
//1 3 3 1		n=3
//1 4 6 4 1		n=4
//���ö�ά���飬
//1.ÿһ�еĵ�һ�������һ��Ԫ�ض���1��
//2.�ӵ����п�ʼ��ÿһ�еĵڶ���Ԫ�ض�������ϵ�Ԫ��֮�͡�
void Pascal()
{
	int a[row][row] = { 0 };
	int i, j;
	
	//��Ϊÿ�е���Ԫ�غ����һ��Ԫ�ظ�ֵ��
	for (i = 0; i < row; ++i)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}
	//�ӵ����п�ʼΪ�丳ֵ
	for (i = 2; i < row; ++i)
	{
		for (j = 1; j < row; ++j)
		{
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
		}
	}
	//��ӡ,ֽ��ӡ��Ч��Ԫ��
	for (i = 0; i < row; i++)
	{
		for (j = 0; j <=i; j++)
		{
			printf("%-3d  ", a[i][j]);
		}
		printf("\n");
	}
}


int main()
{
	Pascal();
	system("pause");
	return 0;
}