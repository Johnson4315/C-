#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    double p,s;
    printf("请输入三边长:");
    scanf("%d %d %d",&a,&b,&c);
    p=(a+b+c)/2.0;
    s=sqrt((p*(p-a)*(p-b)*(p-c)));
    printf("面积是：%lf",s);
}
