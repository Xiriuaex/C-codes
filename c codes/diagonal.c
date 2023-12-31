#include<stdio.h>

int matrix(int row, int col){
    int matrix[row][col], i, j;
    printf("Enter the elements:");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    return 0;
}

int diagonal(int a, int b){

    int matrix[a][b],sum=0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", matrix[i][j]);
            if(i==j){
                sum+=matrix[i][j];
            }
        }
        printf("\n");
    }
    printf("\nThe sum of the diagonal elements: %d\n", sum);
    return 0;
}

int main(){
    int a, b;
    printf("Enter row:");
    scanf("%d", &a);
    printf("Enter col:");
    scanf("%d", &b);
    matrix(a,b);
    diagonal(a,b);

}