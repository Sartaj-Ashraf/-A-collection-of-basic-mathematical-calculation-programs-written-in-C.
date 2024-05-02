#include <stdio.h>

int main()
{
    /*declare the variables*/
    int cost_price;
    int selling_price;
    int amount;

    /*enter the cost price*/
    printf("Enter the cost price: ");
    scanf("%d", &cost_price);

    /*enter the selling price*/
    printf("Enter the selling price: ");
    scanf("%d", &selling_price);

    /*if condition*/
    if (selling_price > cost_price) {
        /*formula to find profit*/
        amount = selling_price - cost_price;
        printf("profit = %dRS", amount);
    }
    /*else if condition*/
    else if (cost_price > selling_price) {
        /*formula to find loss*/
        amount = cost_price - selling_price;
        printf("loss = %d RS", amount);
    }
    /*else condition*/
    else {
        printf("No profit no loss\n");
    }
    return 0;
}