#include <stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
    int a, b;
    // const int c = 5;
    printf("Enter value of\nA = ");
    scanf("%d", &a);
    printf("B = ");
    scanf("%d", &b);
    printf("\nBefor value swapping value of\nA = %d\nB = %d", a, b);
    // swap the value
    /*c = a;
    a = b;
    b = c;*/
    a = a * b;
    b = a / b;
    a = a / b;
    printf("\nAfter value swapping value of\nA = %d\nB = %d", a, b);
    return 0;
}
/*
    a = 9, b = 10;
    // c = a; -> c = 9
    // a = b; -> a = 10 (value is copied)
    // b = c; -> b = 9
    a = a + b // a = 9 + 10 = 19
    b = a - b// b = 19 - 10= 9
    a = a- b// a = 19 - 10 = 9
*/