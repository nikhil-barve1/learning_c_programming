// H.W.
// WAP to check whether the no is positive or negative

#include <stdio.h>

int main()
{
    int n;
    printf("Enter num: ");
    scanf("%d", &n);

    if (n >= 0)
    {
        printf("%d is positive number.", n);
    }
    else
    {
        printf("%d is negative number.", n);
    }

    return 0;
}