#include<stdio.h>
int main(void)
{
	int month, year, day;
	int sum = 0;
	printf("请输入你的年月日:\n");
	scanf_s("%d%d%d", &year, &month, &day);
	switch (month)
	{
	case 1:sum = 0; break;
	case 2:sum = 31; break;
	case 3:sum = 59; break;
	case 4:sum = 90; break;
	case 5:sum = 120; break;
	case 6:sum = 151; break;
	case 7:sum = 181; break;
	case 8:sum = 212; break;
	case 9:sum = 243; break;
	case 10:sum = 273; break;
	case 11:sum = 304; break;
	case 12:sum = 334; break;
	default: break;
	}
	sum += day;
	if (year % 4 == 0 && year % 100 != 0 || month > 2 && year % 400 == 0)
		sum++;
	printf("%d", sum);
}