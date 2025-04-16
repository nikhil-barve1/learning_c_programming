/*
H.W.
3. WAP to perform arithmatic operation using switch case
1. Add
2. sub
3. mul
*/

#include <stdio.h>

int main()
{
    int n1, n2, op;

    while (1)
    {
        printf("\nEnter two numbers: ");
        scanf("%d%d", &n1, &n2);
        printf("\nSelect no of operation from below that you want to perform: ");
        printf("\n1.Addition");
        printf("\n2.Subtraction");
        printf("\n3.Multiplication");
        printf("\n4.Divsion");
        printf("\n5.Exit");

        printf("\nEnter operation number: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("%d + %d = %d", n1, n2, n1 + n2);
            break;
        case 2:
            printf("%d - %d = %d", n1, n2, n1 - n2);
            break;
        case 3:
            printf("%d x %d = %d", n1, n2, n1 * n2);
            break;
        case 4:
            printf("%d / %d = %d", n1, n2, n1 / n2);
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("\nPlease enter valid expression!!");
        }
    }

    return 0;
}
