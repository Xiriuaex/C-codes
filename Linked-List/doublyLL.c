#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* head;
//why we even want a doubly linked list?
//forward and reverse lookup

struct Node* getNewNode(int x){
    struct Node* newNodePtr= (struct Node*)malloc(sizeof(struct Node));
    newNodePtr->data= x;
    newNodePtr->next= NULL;
    newNodePtr->prev= NULL;
    return newNodePtr;
}

void insert(int x){  
    struct Node* newNode= getNewNode(x);
    if(head==NULL){
        head=newNode;
        return;
    }
    head->prev= newNode;
    newNode->next= head;
    head= newNode;
}

void print(){
    struct Node* temp= head;
    printf("forward:");
    while(temp!= NULL){
        printf("%d", temp->data);
        temp=temp->next;

    }
    printf("\n");
}

void reversePrint(){
    struct Node* temp= head;
    if(temp== NULL)return;// empty list, exit;
    //going to last node:
    while(temp->next!= NULL){
        temp=temp->next;
    }
    //traversing backward using prev pointer:
    printf("reverse:");
    while(temp!= NULL) {
        printf("%d", temp->data);
        temp= temp->prev;
    }
    printf("\n");
}

int main(){
    head=NULL;

    insert(2); print();reversePrint();
    insert(6); print();reversePrint();
    insert(8); print();reversePrint();
    insert(4); print();reversePrint();

}