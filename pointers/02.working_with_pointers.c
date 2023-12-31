#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 100;
    int *p;
    p = &a; //&a--address of a

    printf("Value at address p is %d\n", *p); //*p--value at address pointed by p
    printf("address of a is %d\n", &a);       //also gives the address
    *p = 110;                                 //dereferencing
    printf("value of a after dreferencing is %d\n", a);
    printf("size of an integer is %d bytes\n", sizeof(int)); 
    //sizeof(data type)- function that tell us the memory taken by a specific data type
    printf("address of p is %d\n", p);       //address of p
    printf("address of p+1 is %d\n", p + 1); //address of the block after p
    printf("value at address p+1 %d\n", *(p + 1)); //value at address after the block p.
    return 0;
}