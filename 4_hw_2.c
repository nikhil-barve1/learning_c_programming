// WAP to convert Celsius to Fahrenheit ((Celsius = s * 9/5) + 32);

#include <stdio.h>

void main()
{
    float cel;
    // cel * (9/5) + 32;

    printf("Enter Celsius : ");
    scanf("%f", &cel);

    float result = cel * (9 / 5.0) + 32;

    printf("Farenheit : %.2f", result);
}