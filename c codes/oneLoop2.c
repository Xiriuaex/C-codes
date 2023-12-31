#include<stdio.h>

int main(){
    int i, j,n;
    printf("Enter n:");
    scanf("%d", &n);
    j=n;
    for (i = 1; i <= n; )
    {
        printf("%d", j);
        j--;
        if(j<i){
            i++;
            printf("\n");
            j=n;
        }
    }
    return 0;
}