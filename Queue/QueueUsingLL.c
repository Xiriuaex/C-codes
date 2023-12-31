//Queue using Linked List:

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


struct Node
{
    int data;
    struct Node* next;
};

struct Node* front= NULL;
struct Node* rear= NULL;

bool isEmpty(){
    if(front==NULL && rear==NULL)
        return true;
    else return false;
}

void enQueue(int x){ 
    //creating a new node and assign value:
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data= x;
    newNode->next=NULL;
    
    if(isEmpty()){ 
        front= rear = newNode;
       
    }else{
        rear->next=newNode;
        rear=newNode;
    }
}

int deQueue(){
    struct Node* temp=front;
    if(isEmpty())
        return 0;
    if(front==rear)
        front= rear=NULL;
    else
        front=front->next;
    free(temp);
}

void printQueue(){
    struct Node* temp1= front;
    while(temp1!=NULL){
        printf("%d ", temp1->data);
        temp1=temp1->next;
    }
    printf("\n");
}
int main(){
    enQueue(3);
    enQueue(4);
    enQueue(5);
    enQueue(8);
    enQueue(34);
    deQueue();
    printQueue();
}