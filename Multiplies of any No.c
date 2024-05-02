#include <stdio.h>

int main()
{
    int number, multiplier, product;

    printf("enter the number");
    scanf("%d", &number);
    for (multiplier = 1; multiplier <= 10; multiplier++)
    {

        product = number * multiplier;
        printf("%d", product);
    }
}
