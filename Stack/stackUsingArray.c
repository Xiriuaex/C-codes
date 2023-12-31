#include<stdio.h>

#define MAX_SIZE 101
int A[MAX_SIZE];
int top=-1;

int Push(int x){
    if(top==MAX_SIZE-1){
        printf("Stack Overflow!");
        return 0;
    }
    A[++top]= x;
}

int Pop(){
    if(top==-1){
        printf("Stack Underflow!");
        return 0;
    }
    top--;
}

int Top(){
    return A[top];
}

void Print(){
    int i;
    printf("Stack:");
    for(i= 0; i<=top; i++)
        printf("%d ", A[i]);
        printf("\n");
}


int main(){
    Push(2);
    Push(4);
    Print();
    Push(2);
    Print();
    Pop();
    Print();
    Pop();
    Print();
}