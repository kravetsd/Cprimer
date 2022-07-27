#include <stdio.h>

int main(void)
{
    void smile(void);
    smile();
    smile();
    smile();
    printf("\n");
    smile();
    smile();
    printf("\n");
    smile();
    printf("\n");

    return 0;

}

void smile(void)
{
    printf("Smile!");
}