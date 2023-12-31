/*
arrays and pointers are different types that are used in similar manner
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c1[] = "hello";
    char *c2;
    c2 = c1;
    printf("%c", c2[3]);
    c2[0] = 'a';
    printf("\n%c", c2[0]);
    return 0;
}