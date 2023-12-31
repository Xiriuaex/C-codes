//Merge Sort:

#include<stdio.h>
#include<stdlib.h>

void merge(int arr[], int si, int ei, int mid){
	int i=si;
	int j= mid+1;
	int k=0;
	int temp[ei-si+1];
	//sort part:
	while(i<=mid && j<=ei){
		if(arr[i]<arr[j]){
			temp[k]=arr[i];
			i++;
		}else{
			temp[k]=arr[j];
			j++;
		}
		k++;
	}
	
	while(i<=mid){
		temp[k++]=arr[i++];
	}
	
	while(j<=ei){
		temp[k++]=arr[j++];		
	}
	for (k= 0,i=si; k<ei-si+1; k++, i++){
            arr[i]=temp[k];
        }
     
}

void mergeSort(int arr[], int si, int ei){
	 if(si>=ei){
            return;
        }   
	int mid= si+(ei-si)/2;
	mergeSort(arr, si, mid);
	mergeSort(arr, mid+1, ei);
	merge(arr, si, ei, mid);
	
}

void print(int arr[], int size){
	int i;
	for ( i = 0; i < size; i++) {
           printf("%d ", arr[i]);
        }
}

int main(){
	int arr[]= {6,3,9,5,2,8};
	int size= sizeof(arr)/sizeof(arr[0]);
	 print(arr, size);
    
    mergeSort(arr, 0,size-1);
    print(arr, size);
    
    return 0;
}