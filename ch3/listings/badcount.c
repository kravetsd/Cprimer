#include <stdio.h>


int main(void)
{

    int i = 4;
    int j = 5;


    float a = 0.05f;
    float b = 0.06f;

    printf("%d \n",i,j); // too many arguments;

    printf ("%d, %d, %d\n", i); // too low arguments;

    printf("%d, %d \n", a, b); // wrong type of arguments.


    return 0;
}