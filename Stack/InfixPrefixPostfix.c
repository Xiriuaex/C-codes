/* 
   a*b+c*d-e
=> ab*+cd*-e
=> ab*cd*+-e
=> ab*cd*+e-
*/
#include<stdio.h>
#include<string.h>
#include <stdbool.h>

#define MAX_SIZE 101
int A[MAX_SIZE];
int top=-1;

int Push(int x){
    if(top==MAX_SIZE-1){
        printf("Stack Overflow!");
        return 0;
    }
    A[++top]= x;
}
int Pop(){
    if(top==-1){
        printf("Stack Underflow!");
        return 0;
    }
    top--;
}
int Top(){
    return A[top];
}


int perform(char op, int op1, int op2){
   if(op == '+') return op1 +op2;
	else if(op == '-') return op1 - op2;
	else if(op == '*') return op1 * op2;
	else if(op == '/') return op1 / op2;
}

bool IsNumericDigit(char C) 
{
	if(C >= '0' && C <= '9') 
        return true;
    else
	    return false;
}

int Postfix(char Str[], int length){
    int i;
    int op1, op2, val;
    for (i = 0; i < length; i++)
    {
        if(Str[i]=' '){
            continue;
        }
        if(IsNumericDigit(Str[i])){
            int operand = 0; 
			while(i<strlen(Str) && IsNumericDigit(Str[i])) {
				operand = (operand*10) + (Str[i] - '0'); 
				i++;
			}
			i--;
            Push(Str[i]);
        }
        else{
            op2=Top();Pop();
            op1=Top();Pop();
            val= perform(Str[i], op1, op2);
            Push(val);
        }
    }
    return Top();
}

int main(){
    char Str[30];
    int answer;
    printf("Enter the expression: ");
    fgets(Str,30, stdin);
    answer= Postfix(Str, strlen(Str));
    printf("The answer is %d", answer);
}
