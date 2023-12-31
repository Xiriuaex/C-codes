#include <stdio.h>
#include <stdlib.h>

int total; // global variable
int sqr(int x)
{
    return x * x;
}
int sqrOfSun(int x, int y)
{
    int z = sqr(x + y); // calling sqr function while this sqrOfSum pause for the time being
                        // and waiting for the sqr function to return a value.
    return z;
}
int main()
{
    int a = 2, b = 3;
    total = sqrOfSun(a, b); // here main calls sqrOfSum. 
    //The main function will pause and waiting for the sqrOfSum function to return a value.

    printf("output= %d", total);

    return 0;
}