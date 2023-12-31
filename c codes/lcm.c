#include<stdio.h>

int lcm(int a,int b){
    int max;
    if(a>b){
        max=a;
    }
    if(a<b){
        max=b;
    }
    while (1)
    {
       if(max%a==0 && max%b==0){
            printf("LCM: %d", max);
            break;
       }
       ++max;

    }
    
    return 0;
}

int main(){
    int a,b;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    lcm(a,b);
    return 0;
}