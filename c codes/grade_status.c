#include <stdio.h>
#include <stdlib.h>

int status(char input);

int main()
{

    char gr;

    printf("Enter your grade: ");
    scanf("%c", &gr);
    status(gr);

    return 0;
}

int status(char input)
{

    char grade;
    grade = input;
    switch (grade)
    {
    case 'A':
        printf("you did Great!");
        break;
    case 'B':
        printf("you did alright!");
        break;
    case 'F':
        printf("you failed the test");
        break;
    case 'c':
        printf("Pass.");
        break;
    default:
        printf("invalid input");
    }
    return 0;
}