#include<stdio.h>
int main()
{
    int i;
    for ( i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            goto equal;
        }
        printf("\n%d", i);
    }
    equal:
        printf("\nThis is goto statement.........");
    return 0;
}