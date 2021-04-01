#include<stdio.h>
#include<stdlib.h>
int fibon(int m);
int main(void)
{
	int n;
	printf("请输入你的数字\n");
	scanf_s("%d", &n);
	int m = fibon(n);
	printf("%d", m);
	system("pause");
	return 0;
}
int fibon(int m)
{
	if (m == 1)
	{
		 m==1;
	}
	else if(m==0)
	{
		m = 0;
	}
	else
	{
		m = fibon(m - 1) + fibon(m - 2);
	}
	return m;
}