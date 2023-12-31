// use of function pointers

/// can be passed as arguments to functions

#include <stdio.h>
#include <stdlib.h>
void a() // a is a callback function
{
    printf("hello");
}
void b(void (*ptr)()) // function pointer as argument

{
    ptr(); // call-bacck functon that "ptr" points to
}

int main()
{
    void (*p)() = a;
    b(p);
    // or b(a);// a is callback function
}