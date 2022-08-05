#include <stdio.h>


int main(void)
{
    char first[30];
    char last[30];

    printf("Please enter your first name and lastname: \n");
    scanf("%s %s", first, last);

    printf("%s %s\n", last,first);


    return 0;

}