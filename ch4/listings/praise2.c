#include <stdio.h>
#include <string.h>

#define PRAISE "You are an extraordinary being."

int main(void)
{
    char name[40];

    printf("What's your name?\n");
    scanf("%s", name);

    printf("Hello, %s, %s.\n", name, PRAISE);

    printf("Your name of %zd letters occupies %zd bytes of memory\n",strlen(name), sizeof name);

    printf("The phraise is %zd letters long ", strlen(PRAISE));

    printf("and occupies %zd bytes of memory\n", sizeof PRAISE);


    return 0;
}