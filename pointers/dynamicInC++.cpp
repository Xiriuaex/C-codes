#include <iostream>

using namespace std;

int main()
{
    int a;
    int *p;
    p = new int; // IN cpp we don't have to typecast.
    *p = 10;
    cout << "the value of p: " << *p;
    cout << "the address of p: " << p;
    cout << "the address of p: " << p;

    // delete p;
    // p = new int[20]; // to allocate an array in heap
    // delete[] p;

    return 0;
}