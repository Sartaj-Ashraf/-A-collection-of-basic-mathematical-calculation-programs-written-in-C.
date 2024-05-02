#include<stdio.h>

int main()
{
    int num;
    printf("Enter the value n");
    scanf("%d",&num);

    switch (num%2==0)
    {

        case 0:
        printf("The number is odd");
        break;
        case 1:
        printf("The number is even");
        break;
    }

}