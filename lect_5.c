#include <stdio.h>

void main()
{
    int no1, no2, max;

    printf("Enter two nos: ");

    scanf("%d%d", &no1, &no2);

    // no % 2 == 0 ? printf("\nEven") : printf("\n Odd");

    max = no1 > no2 ? no1 : no2;

    printf("\n%d is greater", max);
}

// wap to find max between 2 nos

// wap to print whether the no is divisible by 7 or not

// wap to print whether the first no is divisible by 2nd or not
