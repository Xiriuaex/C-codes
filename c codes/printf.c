/*
printf() function


 it is a function that print a information;

 syntax--
    
    printf("information inside double qoutation");

#we can also print number.

#  We use format specifier--
        %d-- to print a integer variable;
        %s-- to print a string variable;
        %f-- to print a decimal variable;
        %c-- to print a character variable;

     printf("information %s %d, number, 400");

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 18;
    char name[] = "Pragyan Chetia";
    double cgpa = 4.5;
    printf("my name is %s and my age is %d.\nMy cgpa is %f", name, age, cgpa);
    return 0;
}
