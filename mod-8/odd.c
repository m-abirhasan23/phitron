#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int x[n];

    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &x[i]);
    }

    for (int i = n - 1; i >= 0; i--)

    {
        if (i % 2 == !0)
        {
            printf("%d ", x[i]);
        }
    }

    return 0;
}