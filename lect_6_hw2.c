// H.W.
// 2. Check if character is consonant or vowels

#include <stdio.h>

int main()
{
    char c;

    printf("Enter char: ");
    scanf("%c", &c);

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        printf("%c is vowel.", c);
    }
    else
    {
        printf("%c is consonant.", c);
    }

    return 0;
}
