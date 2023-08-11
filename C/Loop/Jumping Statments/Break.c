#include<stdio.h>
int main()
{
    int i;
    i = 0;
    while(i < 10)
    {
        if (i == 5)
        {
            break;
        }
        printf("\n%d",i);
        i++;
    }
    return 0;
}