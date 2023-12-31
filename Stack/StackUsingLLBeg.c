#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* Top=NULL;

int Push(int x){

    struct Node* newNode= (struct Node*)malloc(sizeof(struct Node*));
    newNode->data=x;
    newNode->next=Top; 
    Top=newNode;
}

void Pop(){
    struct Node* temp= Top;
    if(Top==NULL) return;
    Top= Top->next;
    free(temp);
}
void Print(){
    struct Node* temp= Top;
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int top(){
    return Top->data;
}
int main(){
    Push(3);
    Push(4);
    Push(2);
    Print();
    Pop();
    Print();
    Pop();
    Print();
    Push(5);
    Push(6);
    Print();
    Pop();
    Print();
    Push(10);
    Print();
    printf("The current Top element is %d\n", top());
}