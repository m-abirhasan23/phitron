#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int A[n];
    int max = 0, maxIndx = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    int min = A[0], minIndx = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
            maxIndx = i;
        }
        else if (A[i] < min)
        {
            min = A[i];
            minIndx = i;
        }
    }

    // swap
    int temp = A[minIndx];
    A[minIndx] = A[maxIndx];
    A[maxIndx] = temp;

    for (int i = 0; i < n; i++)
    {

        printf("%d ", A[i]);
    }

    // printf("%d %d", maxIndx, minIndx);

    return 0;
}