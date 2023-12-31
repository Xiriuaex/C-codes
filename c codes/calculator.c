#include<stdio.h>

float calculator(float a , float b, char operator){
    float result;
    switch (operator)
    {
    case '+':
        result=a+b;
        break;
    case '-':
        result=a-b;
        break;
    case '*':
        result=a*b;
        break;
    case '/':
        result=a/b;
        break;
    
    default:
        printf("error!");
        break;
    }

    return result;
}

int main(){
    float a, b,result;
    char op;
    printf("enter first number:");
    scanf("%f", &a);
    printf("\nenter second number:");
    scanf("%f",&b);
    printf("\nenter operation:");
    scanf(" %c", &op);
    result= calculator(a,b,op);
    printf("\nThe answer is %f", result);

    return 0;

}