#include <stdio.h>

int main()
{
    int n, sum = 0;
    ;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);

        sum = sum + ar[i];
    }

    if (sum < 0)
    {
        sum = sum * -1;
    }

    printf("%d", sum);

    return 0;
}