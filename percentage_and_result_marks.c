#include <stdio.h>
void main()
{
    int maths, chemistry, physics;
    float total;

    printf(" enter your maths marks\n");
    scanf("%d", &maths);

    printf(" enter your chemistry marks\n");
    scanf("%d", &chemistry);

    printf(" enter your maths marks\n");
    scanf("%d", &physics);
    total = (maths + chemistry + physics) *100 /2;

    if ((total < 40) || maths < 33 || chemistry < 33 || maths < 33)
{
        printf("your perecentage is %f and you fail\n" , total);
    }

    else
    {
        printf("your perecentage is %f and you passed\n" , total);
    }
}
