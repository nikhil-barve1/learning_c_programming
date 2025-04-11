#include <stdio.h>

void main()
{
    int no;
    printf("Enter num: ");
    scanf("%d", &no);

    if (no % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}
