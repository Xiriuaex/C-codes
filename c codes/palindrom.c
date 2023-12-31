
#include <stdio.h>
#include<string.h>


int palindrome(char str[]){
   
    int i=0;
    int j=strlen(str)-1;
   while (i<j)
   {
        if(str[i++]!= str[j--]){
            printf("not a palindrome!");
            return 0;
        }
        
   }
    printf("palindrome");

}

int main(){
    char str[10];
    printf("Enter str:");
    scanf("%s", str);
    palindrome(str);
    return 0;
}