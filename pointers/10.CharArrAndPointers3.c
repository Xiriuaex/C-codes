#include <stdio.h>
#include <stdlib.h>

void print(char *c) // const char *c -- to read only and not write anything
{
    int i = 0;
    while (c[i] != '\0')
    {
        printf("%c", c[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    char ar[20] = "hello world"; // string gets stored in the space for array
    char *c = "hello";          // string gets stored as compile time constant
    //printf("hello world ");     // string gets stored as compile time constant
    
    print(c);

    return 0;
}