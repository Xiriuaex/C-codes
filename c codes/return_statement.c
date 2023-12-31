#include <stdio.h>
#include <stdlib.h>

double cube(double num)
{
    double input;
    printf("Enter the number you want to cube:");
    scanf("%lf", )

        double result = num * num * num;

    return result; //break us out of the function and
                   // return the
                   //result to the calling function
    /*or
        return num*num*num;
    */
}

int main()
{
    printf("Answer: %f", cube(20.3));

    return 0;
}
