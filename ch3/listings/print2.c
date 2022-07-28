#include <stdio.h>

// does not compiled on 64 bit system!
int main(void)
{
    unsigned int un = 3000000000;

    short end = 200;

    long big = 65537;

    long long verybig = 12345678908642;

    printf("un = %u and not %d\n", un, un);
    printf("end = %hd and %d\n", end, end);
    printf("big = %ld and not %hd\n", big, big); //throws an error for 64 bit system
    printf("verybig= %lld and not %ld\n", verybig, verybig); //throws an error for 64 bit system
    return 0;
}