#include <stdio.h>

int main()
{

    char s[100];
    scanf("%s", s);
    fgets(s, 100, stdin);

    for (int i = 0; i <= 100; i++)
    {
        printf("%s", s[i]);
    }

    return 0;
}