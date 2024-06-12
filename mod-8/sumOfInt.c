#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int positive = 0, negative = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = n - 1; i >= 0; i--)

    {
        if (arr[i] < 0)
        {
            negative = negative + arr[i];
        }
        else
        {
            positive = positive + arr[i];
        }
    }

    printf("%d", positive);
    printf(" %d", negative);
    return 0;
}