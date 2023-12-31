#include <stdio.h>
#include <stdlib.h>

int max(int n1, int n2)
{
    int result;
    if (n1 > n2)
    {
        result = n1;
    }
    else
    {
        result = n2;
    }
    return result;
}
int main()
{

    printf("%d\n", max(211, 10));

    return 0;
}