#include <stdio.h>


int main(void)
{
    float sym;

    printf("Please enter a floating point digit: \n");

    scanf("%f",&sym);

    printf("fixed-point notation: %f", sym);
    printf("\nexponential notation: %e",sym);
    printf("\np notation: %a", sym);
    printf("\n");

    return 0;
}