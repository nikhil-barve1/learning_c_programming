// Program to add digits in given number.

#include <stdio.h>

int main()
{

    int n = 246, rem, sum = 0;

    int num = n;

    while (num != 0)
    {
        rem = num % 10;

        sum = sum + rem;

        num = num / 10;
    }

    printf("Sum of digits of %d is %d", n, sum);

    return 0;
}