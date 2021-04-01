#include<stdio.h>
#include<stdlib.h>
#define n 10
int main(void)
{

	int a[10]; int i = 0, j; int index = 0,t;
	printf("请输入十个元素\n");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (i = 0; i < n-1; i++)
	{
		index = i;
		for (j = i + 1; j < n; j++)
		{
			if (a[j] > a[index])
			{
				index = j;
		    }
			
		}
		if (index != i)
		{
			t = a[index];
			a[index] = a[i];
			a[i] = t;
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\t", a[i]);
	}
	system("pause"); 
	return 0;
}