#include <stdio.h>

int main(void)
{
    short age;

    printf("Enter your age in years: \n");
    scanf("%hu",&age);

    printf("Your age is %hu years.\nThat is %e seconds.\n", age, 3.156e17*age);


    return 0;

}