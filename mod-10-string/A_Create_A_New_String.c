#include <stdio.h>
#include <string.h>
int main()
{
    char s1[1000], s2[1000];
    scanf("%s %s", s1, s2);
    int s1Len = strlen(s1);
    int s2Len = strlen(s2);
    printf("%d %d\n", s1Len, s2Len);
    printf("%s %s", s1, s2);
    return 0;
}