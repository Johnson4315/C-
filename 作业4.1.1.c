#include<stdio.h>//标准的输入输出流
#include<stdlib.h>//system("pause")要用
int main(void)
{
	int a[99][99]; int i, j,n;
	printf("请输入你是几阶矩阵\n");
	scanf_s("%d", &n);
	printf("请分别输入你的矩阵的元素\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)//将利用两层for循环将二阶矩阵的元素读入
		{
			scanf_s("%d", &a[i][j]);
		}
	}//第一个for循环代表行，第二个for循环代表列
	int max = a[0][0];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];//如果矩阵有有元素比max大，那么矩阵的max就定义为新的那个更大的元素
			}
		}
	}
	//得到矩阵中最大的数就是max了
	printf("最大的数为%d", max);//输出矩阵中最大的数max
	system("pause");////将黑色窗口停留，用户按任意键后才会退出
	return 0;//程序正常运行要返回一个0
}