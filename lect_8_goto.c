#include <stdio.h>

int main()
{

    int n = 3;

    if (n % 2 == 0)
    {
        goto Even;
    }
    else
    {
        printf("Odd");
    }

Even:
    printf("\nEven");

    return 0;
}