
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head;

void insert(int x){
    struct Node* temp= (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp1= head;
    temp->data=x;
    temp->next=NULL;

    if(head==NULL){
        head=temp;
        return;
    }
    while(temp1->next!= NULL){
        temp1=temp1->next;
    }
        temp1->next=temp;
}

void print(){
    struct Node* temp= head;
    while(temp!=NULL){
        printf(" %d", temp->data);
        temp=temp->next;
    }
    printf("\n");  
}

void reverse(){
    struct Node* prev=NULL;
    struct Node* curr=head;
    struct Node* next;
    if(head==NULL){
        return;
    }
    while(curr!= NULL){   // 3 5 1 9
        next=curr->next;   // next= curr->next= 5
        curr->next=prev;   // curr->next=NULL
        prev= curr;        //prev= 5
        curr=next;       //
    }
    head= prev;
}

int main(){
    insert(3);
    insert(5);
    insert(1);
    insert(9);
    print();
    reverse();
    print();
}