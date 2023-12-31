
#include <stdio.h>
#include <stdlib.h>
void func(int c[][2][2]) // argument: 3D array of integer or (*c)[2][2]
{
}

int main()
{
    int c[3][2][2] = {{{2, 5}, {7, 9}},
                      {{3, 4}, {6, 8}},
                      {{0, 8}, {11, 13}}};
    int a[2] = {1, 2};
    int b[2][3] = {{2, 3, 4}, {6, 5, 7}}; // b returns int (*)[3]

    return 0;
}