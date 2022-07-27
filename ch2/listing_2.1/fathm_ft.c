#include <stdio.h>

int main(void)
{
    /* code */
    int feet, fathoms;
    fathoms = 2;
    feet = fathoms*2;
    printf("There are %d feet in %d fathoms!\n",feet, fathoms);

    printf("Yes, I said %d feet!\n", 6 * fathoms);

    return 0;
}
