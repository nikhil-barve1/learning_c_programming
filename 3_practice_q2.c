// WAP to find avg of 3 nos

#include <stdio.h>

int main()
{
    int n1, n2, n3;
    float avg;

    // printf("Enter n1: ");
    // scanf("%d", &n1);
    // printf("Enter n2: ");
    // scanf("%d", &n2);
    // printf("Enter n3: ");
    // scanf("%d", &n3);

    printf("Enter nums: \n");
    scanf("%d%d%d", &n1, &n2, &n3);

    avg = (n1 + n2 + n3) / 3;

    printf("Avg = %.2f", avg);

    return 0;
}

// h.w.
// WAP to find area and perimeter of a circle
// area = pi * r ^ 2
// perimeter = 2 * pi * r

// WAP to find the perimater of rectangle given its height and width
// perimeter = 2 * (width + height);
