#include<stdio.h>

int main(){
    int lwrRng,uprRng,i,j;
    int isPrime;
    printf("Enter lower range:");
    scanf("%d", &lwrRng);
    printf("Enter upper range:");
    scanf("%d", &uprRng);

    for (i = lwrRng+1; i < uprRng; i++)
    {
        isPrime=1;
         for (j = 2; j <=(i/2); j++)
        {
            if(i%j==0){
                isPrime= 0;
            }
        }
        if (isPrime==1)
        {
            printf("%d ", i);
        }
        
    } 
    return 0;
}