// Listing 14.1 The equivalence of streams; page 329

//demonstrates the equivalence of stream input and output

#include <stdio.h>

int main(void)
{
    char buffer[256];
    puts("\nEnter a string of text and hit enter: \n");
    //input a line and then immediately output it
    puts(gets(buffer));

    return 0;
}
