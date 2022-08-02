#include <stdio.h>

int main(void)
{
    int cups; 

    float onces, pints, tablespoons, teaspoons;


    printf("Please enter a volume in cups: \n");
    
    scanf("%d",&cups);

    pints = cups/2.0;
    onces = cups*8.0;
    tablespoons = onces*2;
    teaspoons = tablespoons*3;


    printf("%d cups is: \n- %.2f pints\n- %.2f onces\n- %.2f tablesponns\n- %.2f teasponns\n", cups,pints,onces,tablespoons,teaspoons);

    return 0;

}