#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[15];
    int age;
    char grade;
    double gpa;

    printf("Enter your name:");
    //  scanf("%s", name);   // only can store a word. To store many words we use fgets function
    fgets(name, 15, stdin); //to store a whole string. after ',' no of character to store.
                            //then put 'stdin'--standard input.
                            //Telling fgets, where we wanna get the info from.
    printf("Enter your age: ");
    scanf("%d", &age); /* allow user to input value. inside "" we give type 
                                     and after comma put the name of the variable where 
                                     we want to add the value;
                                     &age -- a pointer
                                     */

    printf("Enter your gpa:");
    scanf("%lf", &gpa); /* %lf--tell scanf that we're looking for a double*/
    printf("Enter your grade: ");
    scanf("%c", &grade);

    printf("\nyou are %s.", name);
    printf("\nyou are %d years old.", age);
    printf("\n your grade is %c", grade);

    printf("\nyour gpa is %f", gpa);

    return 0;
}