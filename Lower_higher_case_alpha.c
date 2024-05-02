#include<stdio.h>

main()
{
    int i,n;

    printf("enter the alphabit : ");
    scanf("%c", &n);
    if (n<=122 && n>=97)
    {
        printf("It is Lower case");
    }
    else if(n<=90 && n>=65){
        printf("Its Higher case");
    }
    else
    {
        printf("Please enter a correct alphabit");
    }
}