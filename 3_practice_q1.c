// WAP to find sq and cube of a no

#include <stdio.h>

int main()
{
    int num, sq, cube;

    printf("Enter num : ");
    scanf("%d", &num);

    sq = num * num;
    cube = num * num * num;

    printf("Square = %d", sq);
    printf("\nCube = %d", cube);

    return 0;
}