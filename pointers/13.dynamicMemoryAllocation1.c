/*
we can use dynamic memory 
in c:
    1.malloc
    2.calloc
    3.realloc
    4.free
in C++ :
    1. new
    2. delete
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a; // goes to stack
    int *p;
    p = (int *)malloc(sizeof(int)); 
    // malloc asks for how much size is required in heap
    // we are typecasting because malloc returns void pointer and p is an integer pointer
    
    *p = 10;

    free(p); 
    // In heap, the memory doesn't clear automatically so we use free function to clear the memory.

    //  p = (int *)malloc(20 * sizeof(int));-- Creates an array of integer of size 20 in heap.
    
    *p = 12;
    printf("%d", *p);
}
