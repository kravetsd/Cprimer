#include <stdio.h>

int main(void)
{
  float weight;
  float value;

  printf("Are you worht your weight in platinum? \n");
  printf("Let's check it out\n");

  printf("Please enter your weight in pounds: ");

  scanf("%f", &weight);

  value = 1700.0*weight*14.5833;

  printf("Your weight in platinume is worth $%.2f.\n", value);

  printf("Your are easily worth that! If platinum pricees drop.\n");

  printf("Eat more to maintain your value! \n");


  return 0;
}



