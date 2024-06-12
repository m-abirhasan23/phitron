#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    if (ch == 'z')
    {
        ch = 'a';
        printf("%c", ch);
    }
    else
    {

        printf("%c", ch + 1);
    }

    return 0;
}