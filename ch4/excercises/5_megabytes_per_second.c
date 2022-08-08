#include <stdio.h>

int main(void)
{
    float size, speed, time;

    printf("File size in MB: \n");
    scanf("%f", &size);

    printf("Download speed in Mbs: \n");
    scanf("%f", &speed);

    printf("At %.2f megabits per second, a file of %.2f megabytes\ndownloads in %.2f second.\n", speed, size, size*8/speed);
    return 0;
}