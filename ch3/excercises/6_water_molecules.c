#include <stdio.h>

int main(void)
{
    int quart;

    printf("Please enter an amount of quarts of water: \n");

    scanf("%d", &quart);

    printf("A %d quarts of water contains %e water drops \n", quart, (quart*950)/(3.0e-23));

    return 0;
}