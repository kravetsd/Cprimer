#include <stdio.h>

int main(void)
{
    float salary;

    printf("\aPlease enter your salary:");
    printf(" $_______\b\b\b\b\b\b\b");
    scanf("%f", &salary);

    printf("\n\t$%f a month is %f a year", salary, 12*salary);

    printf("\rgood! \n");

    return 0;
}