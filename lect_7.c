#include <stdio.h>

int main()
{

    int a, b;
    char ch = 'y';

    while (ch == 'y')
    {
        printf("Enter two nos : ");
        scanf("%d%d", &a, &b);

        printf("Sum = %d", a + b);

        printf("\nWants to add another two numbers y/n: ");

        scanf(" %c", &ch);
    }

    // int i = 1;

    // while (i <= 10)
    // {
    //     printf("\n%d x %d = %d", 8, i, 8 * i);
    //     i++;
    // }

    return 0;
}