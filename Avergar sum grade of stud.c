#include <stdio.h>
int main()
{

    int a[5]; int i;
    float avg;
    int sum = 0;
    printf("enter the marks of your subjects ");
    printf("\nmath\nphy\nscie\neng \nevs\n");
    
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
     if (a[0] < 33 || a[1] < 33 || a[2] < 33 || a[3] < 33 || a[4] < 33)
    {
        printf("Fail\n ");
    }
    else
    {
        printf("Pass\n");
    }
    for (i = 0; i < 5; i++)
        sum = sum + a[i];
    avg = sum / 5;
    printf("Sum = %d .", sum);
    printf("\nAverage = %f .", avg);

    {
        if (sum > 400)
        {
            printf("\nGrade is 'A'");
        }
        else if (sum > 350)
        {
            printf("\nGrade is 'B'");
        }
        else if (sum > 300)
        {
            printf("\nGrade is 'C'");
        }
        else if (250)
        {
            printf("\nGrade is 'D'");
        }
        else
        {
            printf("\nYou are fail and you grade is not necessary");
        }
    }
}