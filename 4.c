#include <stdio.h>

void main()
{
    printf("\n 10 < 20 = %d", 10 < 20);
    printf("\n 10 > 20 = %d", 10 > 20);
    printf("\n 10 <= 20 = %d", 10 <= 20);
    printf("\n 10 >= 20 = %d", 10 >= 20);
    printf("\n 10 != 20 = %d", 10 != 20);
    printf("\n 10 == 20 = %d", 10 == 20);

    printf("\nLogical AND (&&)");
    printf("\n 1 && 1 = %d", 1 && 1);
    printf("\n 1 && 1 = %d", 1 && 0);
    printf("\n 1 && 1 = %d", 0 && 1);
    printf("\n 1 && 1 = %d", 0 && 0);

    printf("\nLogical OR (||)");
    printf("\n 1 || 1 = %d", 1 || 1);
    printf("\n 1 || 1 = %d", 1 || 0);
    printf("\n 1 || 1 = %d", 0 || 1);
    printf("\n 1 || 1 = %d", 0 || 0);

    printf("\nLogical NOT (!)");
    printf("\n !1 = %d", !1);
    printf("\n !0 = %d", !0);
}