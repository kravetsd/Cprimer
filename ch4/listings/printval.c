#include <stdio.h>

int main(void)
{

    int bph2o = 212;
    int rv;

    rv = printf("%d is a boiling point of a water\n", bph2o);

    printf("printf function just printed %hd symbols. \n", rv);


    return 0;
}