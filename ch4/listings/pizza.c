#include <stdio.h>
#define PI 3.14159

int main(void)
{
    float radius, area, circum;

    printf("Please enter a radius of your Pizza: \n");
    scanf("%f", &radius);
    area = PI*radius*radius;
    circum = 2.0*PI*radius;

    printf("The area of your Pizza is %1.2f \nthe circum of your Pizza id %1.2f.\n", 
    area, circum);

    return 0;
}