#include <stdio.h>

int main()
{
    int x;
    scanf("%c", &x);

    if (x >= 65 && x < 97)
    {
        printf("%c", x + 32);
    }
    else
    {
        printf("%c", x - 32);
    }

    return 0;
}