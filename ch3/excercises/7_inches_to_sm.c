#include <stdio.h>

int main(void)
{
    float inch;

    printf("Please enter your height in inches: \n");
    scanf("%f",&inch);

    printf("Your height in centimeters is: %f  \n", inch*2.54);

    printf("Please enter your height in centimeters: \n");
    scanf("%f",&inch);
    printf("Your height in inches is: %f  \n", inch/2.54);

    return 0;

}