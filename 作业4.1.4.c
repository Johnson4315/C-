#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define len 100
#define N 5
void func(char name[][100], int k);
//数到k退出
int main(void)
{
	int idx = -1, out = 0, count = 0, n,k;  //定义
	int i = 0; char name[len][len];
	printf("请分别输入他们的名字\n");
	for (i = 0; i < N; i++)
	{
		scanf_s("%s", name[i], len);
	}
	printf("请输入数到几退出\n");
	scanf_s("%d", &k);
	func(name, k);
	system("pause");
	return 0;

}
void func(char name[][100], int k)
{
	int idx = -1, out = 0, count = 0; int i = 0;
	while (out < N)//当死亡的人数小于总人数
		//就结束循环条件，（即需要所有的人都退出）
	{
		idx++;//数组的索引，当索引到最后一个元素的时候，将她的下表置为0
		if (idx == N)
		{
			idx = 0;
		}
		if (strcmp(name[idx], "\0") == 0)//表示该人已经退出了
		{
			continue;//就开始下一轮（跳过下面的全部部分，重新执行外面的for循环的部分）
			//即从下一个人开始（进入下一论循环）
		}
		else
		{
			count++;
			if (count == k)
			{
				out++;
				printf("第%d个退出循环的是%s\n", out, name[idx]);
				strcpy(name[idx], "\0");//将她的名字置为'\0'
				//以便下一次可以通过这个条件来判断这个人是否还在循环中
				count = 0;//重新计数

			}
		}
	}
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define len 100
void func(char str[][len],int k );
#define N 5
int main(void)
{
	int k = 0; char str[len][len];
	printf("请输入数到几退出\n");
	scanf_s("%d", &k);
	printf("请输入他们的名字\n");
	for (int i = 0; i < N; i++)
	{
		scanf_s("%s", str[i], len);
	}
	func(k,str);
	system("pause");
	return 0;
}
void func(int k,char str[][len])
{
	
	int idx = -1, out=0, count = 0;
	while (out < N)
	{
		idx++;
		if (idx == N)
		{
			idx = 0;
		}
		if (strcmp(str[idx], "\0") == 0)
		{
			continue;
		}
		else
		{
			count++;
			if (count == k)
			{
				out++;
				printf("第%d退出的是%s\n", out, str[idx]);
				count = 0;
				strcpy(str[idx], "\0");
				//注意一定要用双引号
			//由strcmp的参数和strcpy的参数决定
			}
		}
	}
}