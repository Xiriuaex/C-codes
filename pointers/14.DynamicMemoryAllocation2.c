/*

Allocation block of memory--
    1.malloc-
        syntax- void* malloc(size_t size)
        -size_t is only for positive integer values.unsigned int

    2.calloc-
        syntax- void calloc(size_t num, size_t size)
        -Takes two data type, 
            -first one is no of elements of a particular data type
            -second it takes size of the datatpe
        -calloc also initializes the memory if nothing is given
        -it allocates to zero

    3.realloc-
        syntax- void* realloc(void* ptr, size_t size)
        -To change size of the memory
        -first arugment- ptr to starting address of the starting block
        -second argument is size of the new block

deallocate block of memory--

    free-
        void* p= malloc(sizeof(int)) //always use sizeof

        malloc is a void pointer and we have to typecast before dereferencing:

        int *p=(int*)malloc(sizeof(int));
        printf("%d", *p);
*/

#include <stdio.h>
#include <stdlib.h>
/*
int main(){
    int n;
    printf("enter size of array:\n");
    scanf("%d", &n);
    int *a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}
*/

/*
int main(){
    int n;
    printf("enter size of array:\n");
    scanf("%d", &n);
    int *a = (int *)calloc(n, sizeof(int));
        
    // even if we don't initialize anything
    // the values will asigned by the calloc as zeroes
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }


    free(a);
    a=NULL;// after free, adjust pointer too NULL.
    return 0;
}
*/


// if we want to modify the size of a memory block:

int main()
{
    int n;
    printf("enter size of array:\n");
    scanf("%d", &n);
    int *a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }

    int *b = (int *)realloc(a, 2 * n * sizeof(int)); 
    // create a new memory block and copy the values of previous memory block.
    
    printf("previous block address= %d, new block address=%d\n", a, b);
    // int *a=(int*)realloc(NULL, 0); --equivalent to free(a);

    for (int i = 0; i < n; i++)
    {
        printf("%d", b[i]);
    }
    return 0;
}