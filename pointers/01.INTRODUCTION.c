/*INTRODUCTION TO POINTERS.

 *Every memory has an address.
 
 *When we declare a variable, a computer allocates some amount of memory.

    int=4 bytes
    char =1 byte
    float= 4 bytes

    *The value is stored as binary.

 *Pointers are variables that store address of another variable
 
    a=4; --this variable a  has an unique address suppose in this case it is 204.

    we can asign a variable as int *p;
    which will store the value of the address of the integer variable a.

    int *p -- defining a pointer variable.

    p=&a; -- this is how you assign a value to a pointer variable.
    &a : the address of 'a'.

    print p  -- Give the address of 'a' (204)
    print &a -- Give the address of 'a'(204).
    print &p -- Give adrress of p;
    print *p -- Gives value of a. 
                this is called dereferencing.
    *P=8;
    We can also modify the value of a like this by modifying the value of *p.

*/
