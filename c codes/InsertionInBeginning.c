#include<stdio.h>
#include<conio.h>

int insertInBeginning(int array[], int size){
    int i, no;
    printf("\nEnter the number to insert:");
    scanf("%d", &no);
    for(i= size; i>0; i--){
        array[i]=array[i-1];
    }
    array[0]=no;
    
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

    printf("The array: ");

    for(i=0; i<size; i++){
        printf("%d ", arr[i] );
    }

    //Insert Element at the beginning of the array:
    insertInBeginning(arr,size);


    printf("The new array: ");
    for(i=0; i<size+1; i++){
        printf("%d ", arr[i] );
    }

    getch();
    return 0;
}