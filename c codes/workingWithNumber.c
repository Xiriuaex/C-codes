#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("%f\n", 5 + 4.2);
    printf("%f\n", 5 + 5.4);
    printf("%d\n", 5 * 3);
    printf("%f\n", pow(2, 2)); /*in pw-- must use %f specifier*/
    printf("%f\n", sqrt(36));
    printf("%f\n", floor(23.3244)); /*floor gives the closest lowest integer*/
    printf("%f\n", ceil(32.432));   /*ceil gives the closest largest integer.*/
    return 0;
}