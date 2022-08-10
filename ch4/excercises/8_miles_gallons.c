#include <stdio.h>

int main(void)
{
    float miles, gallons;
    printf("Please enter a number of miles you travaled: \n");
    scanf("%f", &miles);

    printf("Please enter a number of gallons you used: \n");
    scanf("%f", &gallons);

    printf("miles-per-gallon: %.3f\n", miles/gallons);
    

    return 0;
}