#include<stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node* head;

void insertBeginning(int x){
    
    struct Node* temp= (struct Node*)malloc(sizeof(struct Node)); //malloc returns a void pointer to the memory block, temp collects it
    temp->data= x; 
    temp->next= head;
    head= temp;
}

void insertEnding(int x){
    
    struct Node* newNode= (struct Node*)malloc(sizeof(struct Node)); //malloc returns a void pointer to the memory block, temp collects it

    newNode->data= x;
    newNode->next= NULL;
    struct Node* temp1= head;
    if(head==NULL){
        head=newNode;
    }else{
    while (temp1->next!=NULL)
    {
        temp1= temp1->next;
    }
    temp1->next= newNode;
    }
}

void insert(int x, int n){ 
    struct Node *newNode= (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp1= head;
	int i;
    newNode->data= x;
    newNode->next=NULL;
    if(head==NULL || n==1){ 
        head=newNode;
    }else{
        for(i=1; i<n-1; i++){
            temp1=temp1->next;
        }
            newNode->next=temp1->next;
            temp1->next= newNode;
        }
}

void delete(int n){

    struct Node* temp= head;
    int i;
    if(head==NULL){
        printf("Nothing to delete.");
        return;
    }
    if(n==1){
        head=temp->next;
        free(temp);
        return;
    }
    for (i = 1; i < n-1; i++)
    {
        temp=temp->next;
    }
    struct Node* temp1=temp->next; 
    temp->next=temp1->next;
    free(temp1);
}
void print(){
    struct Node* temp= head;
    while(temp!=NULL){
        printf(" %d", temp->data);
        temp=temp->next;
    }

    printf("\n");
}

int main(){
    
    head= NULL; //empty list
    printf("how many numbers:");
    int x, n, i, position, del;
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("Enter the number to add:\n");
        scanf("%d", &x);
        printf("Enter the position:\n");
        scanf("%d", &position);
        insert(x, position);
        
    }
        print();
        printf("Enter the position to delete:\n");
        scanf("%d", &del);
        delete(del);
        print();
     

}
