#include <stdio.h>

int main(void)
{
    void one_three(void);
    void two(void);
    printf("starting now:\n");
    one_three();
    printf("done!\n");

    return 0;


}

void two(void)
{
    printf("two\n");
}

void one_three(void)
{
    printf("one\n");
    two();
    printf("tree\n");
}