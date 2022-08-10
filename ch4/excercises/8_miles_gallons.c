#include <stdio.h>
#define KMPM 1.609
#define LPG 3.785
int main(void)
{
    float miles, gallons;
    printf("Please enter a number of miles you traveled: \n");
    scanf("%f", &miles);

    printf("Please enter a number of gallons you used: \n");
    scanf("%f", &gallons);


    printf("miles-per-gallon: %.3f\n", miles/gallons);

    printf("liters-per-100-km: %.1f\n", (100*LPG)/((miles/gallons)*KMPM));
    

    return 0;
}