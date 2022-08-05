#include <stdio.h>

int main(void)
{
    float num;
    float numm;

    printf("Please enter a float number:\n");

    scanf("%f", &num);

    printf("%2.1f\n", num);
    printf("%2.1e\n\n\n", num);

    printf("Please enter a float number:\n");
    scanf("%f", &numm);


    printf("%+6.3f\n", numm);
    printf("%2.3e\n", numm);



    return 0;
}