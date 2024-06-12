#include <stdio.h>

int main()
{
    int n, x, v;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x); // index
    scanf("%d", &v); // index value

    arr[x] = v;

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}