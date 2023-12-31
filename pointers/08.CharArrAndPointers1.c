#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// string --group of characters
/*
HOW TO STORE STRINGS
1.large char array
(size of array >= no of char in string +1
at the end of the string we put a null character to say that the string has ended, that is
why we need an extra character to store the null char.
*/

int main()
{
    char c[] = "john";
    // c[0] = 'j';
    // c[1] = 'o';
    // c[2] = 'h';
    // c[3] = '\0';
    // c[4] = 'n';
    printf("size in bytes=%d\n", sizeof(c));
    int len = strlen(c);

    printf("length= %d\n", len);

    return 0;
}