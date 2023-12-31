#include<stdio.h>
#include<conio.h>

int main(){
    int array[30];
    int size, i, j, k, pos, no;
    printf("Enter size of the array (max 30):");
    scanf("%d", &size);
    printf("Enter the Elements: \n");
    for(i=0; i<size; i++){
        scanf("%d", &array[i] );
    }

    printf("The array: ");

    for(i=0; i<size; i++){
        printf("%d ", array[i] );
    }

    //Insert Element at any given position:
    printf("\nEnter the number to insert:");
    scanf("%d", &no);
    printf("Enter the position:");
    scanf("%d", &pos);
    if ( pos > size+1 )    
    {
        printf("Insertion not possible.\n");
        return 0;
    }
    else{
        for(i= size; i>pos-1; i--){
        array[i]=array[i-1];
        }
        array[pos-1]=no;
        printf("The new array: ");
        for(i=0; i<size+1; i++){
             printf("%d ", array[i] );
        }
    }
    getch();
    return 0;
}