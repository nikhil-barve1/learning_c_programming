// H.W.
// WAP to check whether the no is positive or negative

#include <stdio.h>

int main()
{
    int n;
    printf("Enter num: ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("%d is positive number.", n);
    }
    else if (n < 0)
    {
        printf("%d is negative number.", n);
    }
    else
    {
        printf("\nThe number is zero.");
    }

    return 0;
}