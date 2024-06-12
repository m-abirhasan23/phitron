#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int b[3] = {90, 80, 70};

    int answer[8];
    for (int i = 0; i < 5; i++)
    {
        answer[i] = a[i];
    }
    for (int i = 5; i < 8; i++)
    {
        answer[i] = b[i];
    }

    for (int i = 0; i < 8; i++)
    {
        printf("%d ", answer[i]);
    }

    int arrSize = (sizeof(answer) / sizeof(answer[8]));
    //    int arraySize= (sizeof(arr) / sizeof(arr[0]))

    printf("\n%d", arrSize);
    return 0;
}