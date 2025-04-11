// WAP to swap two nos without using 3rd variable (use arithmatic op)

#include <stdio.h>

void main()
{
    int a = 10, b = 20;
    printf("Before swaping");
    printf("\nA = %d", a);
    printf("\nB = %d", b);

    a = a + b;

    b = a - b;

    a = a - b;

    printf("\nAfter swaping");
    printf("\nA = %d", a);
    printf("\nB = %d", b);
}