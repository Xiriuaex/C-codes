//Pointers as function returns:

#include <stdio.h>
#include <stdlib.h>

int *add(int *a, int *b){
    int *d = (int *)malloc(sizeof(int)); 
    // have to use heap because in stack the memory is not guarantee

    *d = (*a) + (*b); //  a and b are pointer to integers

    return d;
}
int main()
{
    int a = 2, b = 4;

    int *ptr = add(&a, &b); // value in x of main is copied to a of add
                            // value in y of main is copied to b of add
    printf("sum = %d\n", *ptr);

    return 0;
}