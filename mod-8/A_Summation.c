#include <stdio.h>
#include <stdlib.h> // For abs() function

int main()
{
    int N;

    scanf("%d", &N);

    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int absoluteSum = 0;
    for (int i = 0; i < N; i++)
    {
        absoluteSum = absoluteSum + A[i];
    }

    printf("%d\n", abs(absoluteSum));

    return 0;
}
