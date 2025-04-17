#include <stdio.h>

int main()
{
    int i, j;

    for (int i = 1; i <= 10; i++)
    {
        if (i == 7)
        {
            continue; // skip that number only
            // break; // exit from loop;
        }

        printf("\n %d", i);
    }

    return 0;
}