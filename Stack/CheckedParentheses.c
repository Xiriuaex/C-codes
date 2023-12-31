/*Given a string comprising only of opening and closing characters of parenthesis
curly braces, and square brackets we want to check for balancing.*/


//Count of opening = count of closing

//every opening parenthesis must find closing counter part to its right.
//and vice versa.

//A parenthesis can close only after closing all the parenthesis that 
//opened after it.
//Last opened closed first.

/*Solution:
    -Scan from left to right
    -If opening symbol, add it to a list. (push in stack)
    -If closing symbol, remove last opening symbol in list. (pop from stack)
    -Should end with an empty list.
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <stdbool.h>

bool checkedPar(char exp[], int length){
    char A[length];
    int top=-1,i;
    for (i = 0; i < length; i++)
    {
        if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
           A[++top]=exp[i]; 
        else if(exp[i]==')'||exp[i]=='}'||exp[i]==']'){
            if(top==-1)
                return false;
            if((A[top]=='(' && exp[i]==')')|| (A[top]=='{'&& exp[i]=='}')|| (A[top]=='[' && exp[i]==']'))
                top--;
            else
                return false;
        }
    }
    if(top==-1)
        return true;
    else
        return false;
}
int main(){
    char exp[50];
    printf("Enter the expresion: ");
    fgets(exp, 50, stdin);
    if(checkedPar(exp,strlen(exp))){
        printf("OKAY!");
    }else{
         printf("ERROR!");
    }

}
