//at ending of linked list:


#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *head= NULL;


int Push(int x){
    struct Node* newNode= (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp1=head;
    newNode->data=x;
    newNode->next=NULL;
    if(head==NULL){
        head=newNode;
        return 0;
    }else{
        while(temp1->next!=NULL){
            temp1=temp1->next;
        }
        temp1->next=newNode;
    }
}

int Pop(){
    struct Node* tmp=head;
    if(head==NULL){
        printf("stack underflow!");
        return 0;
    }
    else{
        if(head->next==NULL){
            head= head->next;
            free(tmp);
            return 0;
        }
        while (tmp->next->next!=NULL)
        {
           tmp=tmp->next;
        }
        struct Node* del=tmp->next;
        tmp->next=NULL;
        free(del);
    }
}
void Print(){
    struct Node* temp=head;
    while (temp!=NULL)
    {
        printf("%d ", temp->data);
        temp=temp->next;
    }
    printf("\n");    
}
struct Node* Top(){
    struct Node* top=head;
    while (top!=NULL)
    {
        top=top->next;
    }
    return top;
}
int main(){
    
    Push(4);
    Push(3);
    Push(1);
    Print();
    printf(Top());
}