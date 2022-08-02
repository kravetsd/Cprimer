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


    printf("%d cups is: \n- %f pints\n- %f onces\n- %f tablesponns\n- %f teasponns\n", cups,pints,onces,tablespoons,teaspoons);

    return 0;

}