#include <stdio.h>
#include <stdlib.h>

int main()
{

    int age = 30;
    double gpa = 3.5;
    char name[15] = "pragyan chetia";
    printf("memory address of age: %p\n", &age);
    printf("memory address of gpa: %p\n", &gpa);
    printf("memory address of name: %p\n", name);

    return 0;
}