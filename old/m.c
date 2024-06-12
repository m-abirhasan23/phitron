#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    // MINIMUM
    if (a <= b && a <= c)
    {
        printf("%d", a);
    }
    else if (b <= a && b <= c)
    {
        printf("%d", b);
    }
    else
    {
        printf("%d", c);
    }
    // MAX
    if (a >= b && a >= c)
    {
        printf(" %d", a);
    }
    else if (b >= a && b >= c)
    {
        printf(" %d", b);
    }
    else
    {
        printf(" %d", c);
    }

    return 0;
}