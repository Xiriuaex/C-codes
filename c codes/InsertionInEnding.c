#include<stdio.h>
#include<conio.h>

int insertInEnding(int array[], int size){
    int i, no;
    printf("\nEnter the number to insert:");
    scanf("%d", &no);
    array[size]=no;
    
}
int main(){
    int arr[30];
    int size, i, j;
    printf("Enter size of the array (max 30):");
    scanf("%d", &size);
    printf("Enter the Elements: \n");
    for(i=0; i<size; i++){
        scanf("%d", &arr[i] );
    }

    printf("The array: \n");

    for(i=0; i<size; i++){
        printf("%d ", arr[i] );
    }

    //Insert Element at the end of the array:
    insertInEnding(arr,size);


    printf("The new array: \n");
    for(i=0; i<size+1; i++){
        printf("%d ", arr[i] );
    }
    printf("\n");

    getch();
    return 0;
    
}