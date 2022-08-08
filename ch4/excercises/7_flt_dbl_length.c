#include <stdio.h>
#include <float.h>

int main(void)
{
    float flt = 1.0/3.0;
    double dbl = 1.0/3.0;

    printf("%.4f %.4f\n", flt, dbl);
    printf("%.12f %.12f\n", flt, dbl);
    printf("%.16f %.16f\n", flt, dbl);
    
    printf("%d %d\n",FLT_DIG,DBL_DIG);
    return 0;
}