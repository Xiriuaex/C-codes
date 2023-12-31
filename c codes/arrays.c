#include <stdio.h>
#include <stdlib.h>

int main()
{
    int luckyNumbers[] = {1, 23, 3, 4, 5, 6, 7, 8, 312};
    luckyNumbers[2] = 12; //you can modify any number of the array;

    printf("the number is %d\n", luckyNumbers[2]);

    return 0;
}