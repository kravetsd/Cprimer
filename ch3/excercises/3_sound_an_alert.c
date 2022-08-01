#include <stdio.h>


int main(void)
{
    char beep = '\a';
    // a beep signal is dependent on terminal settings. Be aware to configure your terminal to tunr on bell sound

    printf("here is the beep! %c",beep);

    return 0;
}