// WAP to print sum of first 10 nos;

#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter num till which you want sum of numbers: ");
    scanf("\n%d", &n);

    int i = 1;
    while (i <= n)
    {
        sum += i;
        i++;
    }

    printf("Sum of first %d numbers is: %d", n, sum);

    return 0;
}