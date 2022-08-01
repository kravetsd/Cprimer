#include <stdio.h>


int main(void)
{
    int sym;
    printf("Please enter the asci code for a symbol to print\n");
    scanf("%d",&sym);

    printf("You entered %d, which is %c in ASCII.\n", sym,sym);

    return 0;
}