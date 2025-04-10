// h.w.
// WAP to find area and perimeter of a circle
// area = pi * r ^ 2
// perimeter = 2 * pi * r

#include <stdio.h>

int main()
{
    int r;
    float area, perimeter;

    printf("Enter radius: \n");
    scanf("%d", &r);

    area = 3.14 * r * r;
    perimeter = 2 * 3.14 * r;

    printf("Area = %.2f", area);
    printf("\nPerimeter = %.2f", perimeter);

    return 0;
}
