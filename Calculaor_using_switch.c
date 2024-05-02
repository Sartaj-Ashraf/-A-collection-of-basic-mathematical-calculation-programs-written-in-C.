#include <stdio.h>

main()
{
    int a, b, sum, sub, multi, dev;
    char oprator;
    printf("enter operator ");
    scanf("%c", &operato);
    printf(" enter the two nubers");
    scanf("%d %d ", &a, &b);

    switch (operator)
    {
    case '+':
        sum = a + b;
        printf(" sum = %d", sum);
        break;

    case '-':
        sum = a - b;
        printf(" sub = %d", sub);
        break;

    case '*':
        multi = a * b;
        printf(" multi = %d", multi);
        break;

    case '/':
        dev = a / b;
        printf(" dev = %d", dev);
        break;
    default:
        printf("enter valid operator");
    }
}