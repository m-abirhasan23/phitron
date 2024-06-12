#include <stdio.h>

int main()
{
    int X;

        scanf("%d", &X);

    // Extract the first digit
    int first_digit = X;
    while (first_digit >= 10)
    {
        first_digit /= 10;
    }

    // Check if the first digit is even or odd
    if (first_digit % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }

    return 0;
}
