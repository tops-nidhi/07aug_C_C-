#include<stdio.h>
int main()
{
    int a[20][20];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the value of a[%d][%d]:",i,j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the value of a[%d][%d]:%d\t",i,j, a[i][j]);
            
        }
            printf("\n");
    }
    
    return 0;
}
/*
1   2   3
4   5   6
7   8   9
*/