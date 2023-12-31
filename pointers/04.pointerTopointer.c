#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5;
    int *p = &x;
    *p = 6;
    int **q; 
    q = &p;  //holding the address of a pointer variable.
    int ***r = &q;
    printf("value of x %d\n", *(p));
    printf("value of p %d\n", (*q));
    printf("value of x %d\n", *(*q));
    printf("value of p %d\n", (**r));
    printf("value of x %d\n", *(**r));
    ***r = 10;

    printf("x= %d\n", x);
    **q = ***r + 10;
    printf("new value of x=%d\n", x);

    return 0;
}