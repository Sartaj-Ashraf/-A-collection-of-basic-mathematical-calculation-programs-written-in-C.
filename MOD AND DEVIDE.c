
// Home » C solved programs » C basic programs

// C program to find quotient and remainder
// This program will read dividend and divisor and find the quotient and remainder of two numbers in c language.

// How to get quotient and remainder?
// Binary operator divide (/) returns the quotient, let suppose if dividend is 10 and divisor is 3, then quotient will be 3.

// Binary operator modulus (%) returns the remainder, let suppose if dividend is 10 and divisor is 3, then remainder will be 1.

// In this c program, we will read dividend and divisor and find the quotient, remainder.

// ADVERTISEMENT
Program to find quotient and remainder in C
#include <stdio.h>

int main()
{
	int dividend, divisor;
	int quotient, remainder;
	
	printf("Enter dividend: ");
	scanf("%d",&dividend);
	printf("Enter divisor: ");
	scanf("%d",&divisor);
	
	quotient= dividend/divisor;
	remainder= dividend%divisor;
	
	printf("quotient: %d, remainder: %d\n",quotient,remainder);
	
	return 0;
}