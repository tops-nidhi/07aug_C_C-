#include<stdio.h>
int main()
{
    int a = 100;
    int *ptr; // creating pointer variable

    // Assign the address of the other variable a
    ptr = &a;
    
    printf("Address of the a is:%d", ptr);
    /*
        // Increment the pointer
        ++ptr;
        printf("\nAfter increment address of the a is:%d", ptr);
        return 0;
    */

    // Print the value of a (address of the address) using pointer
    printf("\nValue of the a is:%d", *ptr);

    // Increment the value of a using pointer
    ++*ptr;
    printf("\nAfter increment value of the a is:%d", a);

    // Change the value of a using pointer
    *ptr = 13;
    printf("\nAfter changing value of the a is:%d", a);
}