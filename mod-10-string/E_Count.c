#include <stdio.h>
#include <ctype.h>
int main()
{
    char digit[1000000];
    int sum = 0;
    scanf("%s", digit);
    for (int i = 0; digit[i] != '\0'; i++)
    {
        if (isdigit(digit[i]))
        {

            sum += digit[i] - '0';
        }
    }
    printf("%d", sum);
    return 0;
}