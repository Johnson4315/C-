#include <stdio.h>

int main()
{
   int i,j,n,space;
   printf("请输入树的层数：");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=i+1;j++)
       {
           for(space=1;space<=n+1-j;space++)
           {
               printf(" ");
           }
           for(space=1;space<=2*j-1;space++)
           {
               printf("*");
           }
           printf("\n");
       }
   }
   for(space=1;space<=n+1;space++)
   {
       if(space==n+1)
       {
       printf("|");
       continue;
       }
       printf(" ");
   }
   printf("\n");
   for(space=1;space<=2*n+1;space++)
   
   return 0;
}