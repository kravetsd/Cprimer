#include <stdio.h>

int main(void)
{
    void jolly(void);
    void deny(void);


    jolly();
    deny();

    return 0;
}

void deny(void)
{
    printf("Which nobody can deny!\n");
}

void jolly(void)
{
    printf("For he's a jolly good fellow!\nFor he's a jolly good fellow!\nFor he's a jolly good fellow!\n");
}
