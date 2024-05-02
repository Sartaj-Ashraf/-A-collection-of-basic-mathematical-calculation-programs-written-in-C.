#include <stdio.h>
 
#define PI 3.14f
 
int main()
{
    float radius,area, perimeter;
 
    printf("Enter radius of circle: ");
    scanf("%f",&radius);
 
    area=PI*radius*radius;
    perimeter=2*PI*radius;
 
    printf("Area of circle: %f \nPerimeter of circle: %f\n",area,perimeter);
    return 0;
}