#include <stdio.h>
#include <string.h>
#define DENSITY 62.4

int main(void)
{
    float weight, volume;
    int size, letters;

    char name[40];

    printf("Hi! What's your first name? \n");
    scanf("%s", name);

    printf("Hi %s, what's you weight in pounds? \n", name);
    scanf("%f", &weight);

    size = sizeof name;

    letters = strlen(name);

    volume = weight/DENSITY;

    printf("Well, %s, your volume is %2.0f kubic feet\n",name, volume);


    printf("Also your firs name is %d letters long.\nWe also need %d bytes to store it in memory.\n", letters, size);

    return 0;

}