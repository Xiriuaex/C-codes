//struct is data structure where
//we can store groups of data types

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char name[20];
    char major[20];
    int age;
    double gpa;
};

int main()
{

    struct student student1;
    student1.age = 20;
    student1.gpa = 3.5;
    strcpy(student1.name, "\njim\n");
    strcpy(student1.major, "CS");

    printf("%s", student1.name);

    return 0;
}