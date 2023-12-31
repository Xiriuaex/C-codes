#include <stdio.h>

int compare(int a, int b)
{
    if (a > b)
        return 1;
    else
        return -1;
}

int swap(int a, int b, int A[], int i){
    int temp;
    temp = A[i];
    A[i] = A[i + 1];
    A[i + 1] = temp;
}


int sort(int A[], int n, int (*compare)(int, int))
{
    
    // int (*compare)(int, int);
    for (int j = 0; j < n; j++)
    {

        for (int i = 0; i < n - 1; i++)
        {

            if (compare(A[i], A[i + 1]) > 0) // compaer A[j] with A[j+1] and swap if needed
            {
                swap(A[i], A[i+1], A, i);
            }
        }
    }
}

int main()
{
    int A[] = {5, 3, 51, 7};
    int size = sizeof(A) / sizeof(int);
    int result = sort(A, size, compare);
    for (int a = 0; a < size; a++)
    {
        printf("%d\t", A[a]);
    }
}