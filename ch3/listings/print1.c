#include <stdio.h>
// will not compile by compiler without specific options;

int main(void)
{
    int ten = 10;
    int two = 2;


    printf("Doing it right: \n");
    printf("%d minus %d is equal to %d\n",ten,two,ten-two);

    printf("Doing it wrong: \n");
    printf("%d minus %d is equal to %d \n", ten); //compilation error;

    return 0;
}