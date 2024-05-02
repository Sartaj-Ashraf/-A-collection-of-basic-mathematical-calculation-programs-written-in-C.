
// Home » C solved programs » C basic programs

// C program to calculate Simple Interest
// In this C program, we are going to learn how to calculate simple interest, when principle, rate and time are given?
// Given principal (amount), time and interest rate and we have to calculate simple interest based on given rate of given time period.

// In this program, variable amount is going to be used to store principal amount, rate is going to used to store interest rate and time is going to be used to store time and si is going to be used to store simple interest.

// Formula to calculate simple interest: (principal x rate x time )/100

// C program for Simple Interest
// ADVERTISEMENT
/* c program to calculate simple interest*/
#include <stdio.h>
 
int main()
{
    float amount,rate,time,si;
 
    printf("Enter principal (Amount) :");
    scanf("%f",&amount);
 
    printf("Enter rate :");
    scanf("%f",&rate);
 
    printf("Enter time (in years) :");
    scanf("%f",&time);
 
    si=(amount*rate*time)/100;
 
    printf("\nSimple Interest is = %f",si);
 
    return 0;
}