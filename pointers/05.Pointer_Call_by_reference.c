// Use cases of pointer variable.
// Call by reference.

#include <stdio.h>
#include <stdlib.h>

void increament(int *p)
{
    *p = (*p) + 1;
}
int main()
{
    int a;
    a = 10;
   
/*
    
    increament(a);
    printf("a=%d\n", a);

    it will still print 10. why not 11?
    a is a local variable and both 'a' are different.
    the value stored at a is copied only, it is called by value.

    main() :       calling function 
    increament() : called function

    the argument in calling function is also known as actual argument 
    the argument in the called function is known as formal argument
    actual argument is mapped to formal argument.

    when one variable is mapped to another or to copied to another then it is called call by value.
    when we passed the address of a variable to another function then it is called call by reference.
*/
    increament(&a);
    printf("a=%d\n", a);
    return 0;
}