/*
    WAP to demonstrate pattern
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2 
    1
*/
#include<stdio.h>
int main()
{
    int i, j, chr = 11;
    /*
    // Outer loop 
    for ( i = 0; i < 5; i++) //Use for Row
    {
        // Nested loop or inner loop
        for ( j = 5; j > i; j--) //Use for column
        {
            printf(" %d", i);
            chr++;
        }
        printf("\n");
    }
    */

    // Outer loop 
    for ( i = 0; i < 5; i++) //Use for Row
    {
        // Nested loop or inner loop
        for ( j = 0; j <= i; j++) //Use for column
        {
            printf(" %d", i);
            chr++;
        }
        printf("\n");
    }

    return 0;
}

/*
     1
    1 1
   1 2 1
  1 3 3 1
 1 4 6 4 1 
1 5 10 10 5 1
*/
/*
    1  
   1 2 1
  1 2 3 2 1
 1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
*/
/*
     1
    1 2
   1 2 3
  1 2 3 4
 1 2 3 4 5
 _____________________________________
 1 2 3 4 5
  1 2 3 4
   1 2 3
    1 2
     1
*/