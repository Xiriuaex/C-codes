/*
variables-- container where we store date.

Data types-
    we store different types of data inside variables.

    1.Integer data type--
            int age=4;

    2.double data type and float data type--
        to represent decimal number;
        we will mostly use double data type
   
    3. character data type--
        char grade='a';
        * put character inside a single quotation;
   
    4.string data type--
        char phrase[]="my name";
        * [] is added to make a string.
        * use double qoutation.
    
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char characterName[] = "john";
    int age = 35;
    printf("my name is %s\n", characterName);
    printf("I am %d years old\n", age);
    return 0;
}
