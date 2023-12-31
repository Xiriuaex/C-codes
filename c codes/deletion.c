#include<stdio.h>
#include<conio.h>

int main(){
   int arr[30];
    int size, i, j, k, pos;
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

    //Delete Element at any given position:
    printf("\nEnter the position of the number to delete:");
    scanf("%d", &pos);
    if ( pos >= size+1 ){ 
        printf("Deletion not possible.\n");
        return 0;
    }
    else{
        for(k= pos-1; k<size-1; k++){
            arr[k]=arr[k+1];
        }  
        printf("The new array: ");

        for(i=0; i<size-1; i++){
            printf("%d ", arr[i] );
        }
    }  
    getch();
    return 0;
}