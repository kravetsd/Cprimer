#include <stdio.h>
#include <string.h>

int main(void)
{
    char firstname[40], lastname[40];
    int firstname_size,lastname_size;


    printf("Please enter your firstname:\n");
    scanf("%s",firstname);

    printf("Please enter your lastname:\n");
    scanf("%s", lastname);
    firstname_size = strlen(firstname);
    lastname_size = strlen(lastname);


    printf("%s %s\n", firstname,lastname);
    printf("%*.d %*.d\n",firstname_size,firstname_size,lastname_size,lastname_size);

    printf("%s %s\n", firstname,lastname);
    printf("%-*.d %-*.d\n",firstname_size,firstname_size,lastname_size,lastname_size);

    return 0;
}