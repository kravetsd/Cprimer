#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[40];
    int len;

    printf("Please enter your name: \n");


    scanf("%s", name);

    len = strlen(name);

    printf("\"%s\"\n",name);
    printf("\"%20s\"\n",name);
    printf("\"%-20s\"\n",name);

    printf("\"%*s\"\n",len+3, name);

    return 0;
}