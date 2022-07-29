#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFLEN 256

FILE *outfile;
char mybuff[BUFLEN];    

int storetofile(void);

int main(void)
{
    storetofile();
    return 0;
}

int storetofile()
{

    char *instring;

    printf("Opening a file:\n");
    outfile = fopen("/tmp/tokens", "w+");
    printf("file was opened with \n");
    printf("Hello!\007 and beep!\n"); // this doesn't beep.

    if (!outfile)
        return (-1); // error!
    
    
    while (1)
    {
        instring = fgets(mybuff, BUFLEN, stdin);

        // check for error or end of file ^D:
        if (!instring || strlen(instring)==0) break;

        // Write inputs to an outfile file. Exit on error:
        if (fputs(instring,outfile) <0 ) break;

        
    }

    
    fclose(outfile);

    return 0;
    
}