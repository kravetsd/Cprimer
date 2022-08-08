#include <stdio.h>

int foo(int array[], unsigned int size);

int main(void)
{
    unsigned arr[10];
    int *t;

    printf("%ld\n",sizeof(arr));
    printf("%ld\n",sizeof(t));

    foo(arr,10);

    return 0;
}

int foo(int array[], unsigned int size) {
    printf("%ld\n", sizeof(array));
    return 0;
}