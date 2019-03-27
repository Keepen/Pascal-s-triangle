#include<stdio.h>
#include<stdlib.h>
#define row 10
//打印杨辉三角
//1				n=0
//1 1			n=1
//1 2 1			n=2
//1 3 3 1		n=3
//1 4 6 4 1		n=4
//利用二维数组，
//1.每一行的第一个与最后一个元素都是1，
//2.从第三行开始，每一行的第二个元素都是其肩上的元素之和。
void Pascal()
{
	int a[row][row] = { 0 };
	int i, j;
	
	//先为每行的首元素和最后一个元素赋值。
	for (i = 0; i < row; ++i)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}
	//从第三行开始为其赋值
	for (i = 2; i < row; ++i)
	{
		for (j = 1; j < row; ++j)
		{
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
		}
	}
	//打印,纸打印有效的元素
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