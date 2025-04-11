// wap to print whether the no is divisible by 7 or not

#include <stdio.h>

void main()
{
    int num;

    printf("Enter num : ");
    scanf("%d", &num);

    num % 7 == 0 ? printf("Divisible by 7") : printf("Not divisible by 7");
}