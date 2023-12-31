#include <stdio.h>
#include <stdlib.h>

// int sum(int a[]);
//it is actually interpreted as int *a

//We have to pass the size of array 
//cause we can't possibly know the size otherwise
int sum(int a[], int size)
{
    int i, sum = 0;
    int size1 = sizeof(a) / sizeof(a[0]);
    printf("size of a in sum function= %d\nsize of a[0]=%d\n", sizeof(a), sizeof(a[0]));

    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }
    return sum;
}
int main()
{
    // when a compiler sees an array as function argument it doesn't copy the whole array
    // what it does that it creates a pointer variable by the same name that points to the array
    // the compiler only copies the address of the first element in the array.
    int a[] = {4, 5, 6, 7, 9, 10};
    int size = sizeof(a) / sizeof(a[0]);
    int total = sum(a, size);
    printf("sum of elements = %d\n", total);
    printf("size of a in main function= %d\nsize of a[0]=%d\n", sizeof(a), sizeof(a[0]));
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}