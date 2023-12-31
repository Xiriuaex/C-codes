#include<stdio.h>

int factorial(int n){
    if(n==1 || n==0){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    int answer= factorial(num);
    printf("The factorial of %d is %d\n", num, answer);
    return 0;
}