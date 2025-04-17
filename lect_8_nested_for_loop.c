/*
1. WAP to print below pattern
*
**
***
****
*****

2. WAP to print below pattern
*****
****
***
**
*
*/

#include <stdio.h>

int main()
{
    int i, j;

    // 1st solution
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}