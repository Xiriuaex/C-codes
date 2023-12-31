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
    
}

int Sum(int a, int b){

    int matrix[a][b],sum=0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", matrix[i][j]);
            sum+=matrix[i][j];
        }
        printf("\n");
    }
    printf("\nThe sum of the elements: %d", sum);
    return 0;
}

int main(){
    int i,j;
    printf("Enter rows:");
    scanf("%d", &i);
    printf("\nEnter columns:");
    scanf("%d", &j);
    matrix(i,j);
    Sum(i,j);
    return 0;
}