//Array implementation:
/*
what if arrays gets filled*/


/*
we will create an array, where we put our queue.
At first, when no element: front=rear=-1




*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAX_SIZE 101
int A[MAX_SIZE];
int rear=-1, front=-1;


bool isEmpty(){
    if(front==-1 && rear==-1)
        return true;
    else 
        return false;
    
}

bool isFull(){
    if((rear+1)%sizeof(A)==front)
        return true;
    else return false;
}

int enQueue(int x){
    if(isFull())
        return 0;
    else if (isEmpty()){
        front=0;
        rear=0;
    }else 
        rear=(rear+1)%sizeof(A);
    	A[rear]=x;
}

int deQueue(){
    if(isEmpty()){
        return 0;
    }
    else if(front==rear){
        front=-1;
        rear=-1;
    }else{
        front=(front+1)%sizeof(A);
    }
}

int Front(){
    if(isEmpty){
        printf("queue is empty!");
        return 0;
    }else{
        return front;
    }
}

int printQueue(){
	int i;
    for ( i = front; i <= rear; i++)
    {
        printf("%d ", A[i]);
    }
    
}

int main(){
    enQueue(2);
    enQueue(4);
    enQueue(5);
    enQueue(6);
    printQueue();
    deQueue();
    deQueue();
    deQueue();
    enQueue(9);
    enQueue(8);
    deQueue();
    printf("\n");
    printQueue();
} 
