#include <stdio.h>

int main(void)
{
    unsigned width, precision;
    int number = 256;
    double weight = 242.5;
    char st[40];


    // printf("Enter a field width:\n");
    // scanf("%d", &width);

    // printf("The number is :%*d:\n", width, number);
    // printf("Now enter a width and a precision:\n");

    // scanf("%d %d", &width, &precision);

    // printf("Weight = %*.*f\n", width, precision, weight);

    printf("Please enter any string with a leading space symbol\n");

    scanf("%s", st);
    printf("%s\n", st);
    printf("%c%c%c\n", 'H', 105, '\41');

    printf("Done!\n");


    return 0;
}