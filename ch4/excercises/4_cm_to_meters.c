#include <stdio.h>


int main(void)
{
    char name[40];
    float height;

    printf("Please enter your name: \n");
    scanf("%s", name);

    printf("Please enter yout height in sm. :\n");
    scanf("%f", &height);
    
    printf("%s, you are %.3f meters tall\n", name, height/100.0);
    return 0;
}