#include<stdio.h>

int main(){
    int i, j=1,n;
    printf("Enter n:");
    scanf("%d", &n);
    for (i = 1; i <= n; )
    {
        printf("%d", j);
        j++;
        if(j>i){
            i++;
            printf("\n");
            j=1;
        }
    }
    return 0;
}