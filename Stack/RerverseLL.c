//reverse a LL using Stack:


#include<stdio.h>
#include<stdlib.h>


struct Node{
    int data;
    struct Node* next;
};

struct Node* head= NULL;

int addNode(int x){
    struct Node* newNode= (struct Node*)malloc(sizeof(struct Node*));
    struct Node* temp= head;
    newNode->data=x;
    newNode->next=head;
    head= newNode;
}

void PrintLL(){
    struct Node* temp1=head;
    while (temp1!=NULL)
    {
        printf("%d ", temp1->data);
        temp1= temp1->next;   
    }
}

int reverseLL(){
    struct Node* rev=head;
    while (rev!=NULL)
    {
        addNode(rev);
        rev= rev->next; 
    }
    


     
}
int main(){
    addNode(6);
    addNode(9);
    addNode(2);
    PrintLL();
}