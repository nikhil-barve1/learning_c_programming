// wap to print whether the first no is divisible by 2nd or not

#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Enter n1 and n2 : ");
    scanf("%d%d", &n1, &n2);

    if (n1 % n2 == 0)
    {
        printf("%d - 1st num is divisible by %d - 2nd num.", n1, n2);
    }
    else
    {
        printf("%d - 1st num is not divisible by %d - 2nd num.", n1, n2);
    }

    return 0;
}