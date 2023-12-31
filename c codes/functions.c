/* function is a collection of code that performs a specific task.*/
#include <stdio.h>
#include <stdlib.h>

//function is also known as method.

int main() // main function is first called;

{

    char nam[20];
    printf("enter name:");

    fgets("%s", nam);

    printf("top\n"); //--first

    si(&nam);

    printf("bottom\n"); //--third

    return 0; //--return type is a basically the type
              //of data that the function is going to return.
}

void si(char *name[])
{
    printf("hello %s", name); //--second
                              // we have to call it
} //- void has no return type;

//we cann give function some information. this information is called parametere.
