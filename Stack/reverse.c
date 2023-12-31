#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

struct Node* head=NULL;

void insert(int d){
	struct Node* newNode= (struct Node*)malloc(sizeof(struct Node));
	newNode->data=d;
	newNode->next=NULL;
	newNode->next=head;
	head=newNode;
}

void display(){
	 struct Node* temp= head;
    while(temp!=NULL){
        printf(" %d", temp->data);
        temp=temp->next;
    }

    printf("\n");
}

void reverse(struct Node* p){
	if(p->next==NULL){
		head=p;
		return;
	}
	reverse(p->next);
	struct Node* q= p->next;
	q->next=p;
	p->next=NULL;
}
int  main(){
	insert(3);
	insert(4);
	insert(5);
	insert(7);
	insert(10);
	display();
	reverse(head);
	display();
}
