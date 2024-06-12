#include <stdio.h>

int main()
{
    char s1[1000000];

    // Read characters until backslash is encountered
    if (scanf("%[^\\]", s1) == 1)
    {
        printf("%s\n", s1); // Print the string
    }
    else
    {
        return 0;
    }

    return 0;
}
