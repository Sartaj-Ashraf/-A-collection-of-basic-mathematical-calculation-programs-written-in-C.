#include <stdio.h>
int main()
{
    int i;
    printf("Even numbers between 1 to 1000:\n");
    for (i = 2; i <= 1000; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
  
}