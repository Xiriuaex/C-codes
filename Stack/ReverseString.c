//reverse a String using Stack:


//HELLO \0

//null character is used to mark to end of string, not part of it.

//stack of characters, pushing chars of string.
/*
    O
    L
    L
    E
    H

when we get items the last ones we get first, like O L L E H
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>




int reverse(char C[], int length){
    int i,j;
    char rev[length];
    int top=-1;
    for(i=0; i<length;i++){
    	rev[++top]=C[i];
	}    
	
	
	for(j=length; j>=0; j--){
		printf("%c ", rev[j]);
	}
    
}
int main()
{
    char arr[30];
    printf("Enter a string:");
    gets(arr);
    reverse(arr, strlen(arr));
    
    return 0;
}
