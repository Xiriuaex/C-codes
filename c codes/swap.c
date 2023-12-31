#include<stdio.h>

int swap(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("a after swap=%d\n",a);
    printf("b after swap=%d\n",b);
    return 0;
}

int main(){
    int a,b ;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("a before swap=%d\n",a);
    printf("b before swap=%d\n",b);
    swap(a,b);
    return 0;
}