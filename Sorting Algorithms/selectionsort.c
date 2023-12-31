#include<stdio.h>

int selectionSort(int arr[], int n){
    int i, j, minPos, temp;
    for(i=0; i<n-1; i++){
        minPos=i;
        for(j=i+1; j<n; j++){
            if(arr[minPos]>arr[j]){
                minPos=j;
            }
        }
    //swap:
        temp=arr[minPos];
        arr[minPos]=arr[i];
        arr[i]=temp;
    }
}

void printArr(int arr[], int n){
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
}

int main(){
    int arr[]={5,4,6,0,1,3,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    printf("The unsorted array:\n");
    printArr(arr, n);
    selectionSort(arr,n);
    printf("\nThe sorted array:\n");
    printArr(arr, n);
}