#include <stdio.h>

main()
{
    int a = 0; 
	int b = 1;
	int i = 0;
	int term;
    int n;

    printf("enter the nth term of series");
    scanf("%d", &n);
    printf(" %d  %d", a , b);

    for ( i = 0; i<=n+2; i++)
    
    {
        term = a + b;
        printf("%d", term);
        a = b;
        b = term;
        i++;
    }
}