// h.w.
// WAP to find the perimater of rectangle given its height and width
// perimeter = 2 * (width + height);

#include <stdio.h>

int main()
{
    int w, h;
    float perimeter;

    printf("Enter width and height: \n");
    scanf("%d%d", &w, &h);

    perimeter = 2 * (w + h);

    printf("Perimeter = %.2f", perimeter);

    return 0;
}
