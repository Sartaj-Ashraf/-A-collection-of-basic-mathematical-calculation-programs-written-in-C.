#include<stdio.h>

int main()
{
     int n,i,p,sum=0;
     printf("enter the value of n\n");
     scanf("%d",&n);

     for(i=1;i<=10;i++)
     {
         p=n*i;
         printf(" %d*%d=%d", n,i,p);
     }
    sum=sum+p;
    printf("%d",sum)
}