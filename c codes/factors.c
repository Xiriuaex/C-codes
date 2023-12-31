#include<stdio.h>

int factors(int number){
    int i;
    for (i = 1; i <= number; i++)
    {
       if (number%i==0)
       {
        printf("%d ", i);
       }   
    }
    
}

int main(){
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    factors(number);
    return 0;   
    
}