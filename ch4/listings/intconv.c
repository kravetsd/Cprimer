#include <stdio.h>
#define PAGES 336
#define WORDS 65618
int main(void)
{
    short num = PAGES;
    short mnum = -PAGES;

    short tip = 120000;

    printf("short is %zd bytes\n", sizeof(short));
    printf("int is %zd bytes\n", sizeof(int));

    printf("as unsigned %hu\n", tip);
    printf("as signed %hd\n", tip);
    printf("unsigned short is %zd bytes\n", sizeof(unsigned short));    
    printf("num as short and unsigned short: %hd %hu\n", num, num);
    printf("-num as short and unsigned short: %hd %hu\n", mnum, mnum);
    printf("num as int and char: %d %c\n", num, num);
    printf("WORDS as int, short, and char: %d %hd %c\n", WORDS, WORDS, WORDS);
    return 0;
}