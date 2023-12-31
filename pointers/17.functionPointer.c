/*
    Pointers can point to functions also

    What would be the address of a function???
    What are the use cases??

    The memory is divided into four segments--
    A program is a set of instructions.

    Function is a set of instructions stored in one contiguous block of memory
    to perform a sub task in memory.

    The address of a function which is also called the entry point 
    is the address of the first instruction of that function.

*/


#include <stdio.h>
#include <stdlib.h>

void hello(char *name){
    printf("Hello %s!\n", name);
}

int Add(int a, int b)
{
    return a + b;
}

// int *func(int,int);      //declaring a function that return int*
// int (*func)(int, int);   //declaring a function pointer


int main()
{
    // pointer to function that take
    //(int,int) as argument/parameter and return int
    int sum;
    int (*p)(int, int);
    void (*q)(char*);
    q= hello;
    q("Pragyan chetia");

    p = &Add; //or p=Add// function name will return us pointer.
    sum = (*p)(2, 3); // de-referencing and executing the function.
                    // or c = p(2, 3);

    printf("%d\n", sum);

    return 0;
}