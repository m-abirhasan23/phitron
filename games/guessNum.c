#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MIN = 1;
    const int MAX = 100;
    int answer, guess, guesses;
    srand(time(0));
    answer = (rand() % MAX) + MIN;
    // printf("%d", answer);
    do
    {
        printf("ENTER A NUMBER: ");
        scanf("%d", &guess);

        if (answer > guess)
        {
            printf("TOO LOW\n");
        }
        else if (answer < guess)
        {
            printf("TOO HIGH\n");
        }
        else
        {
            printf("CORRECT ANSWER\n");
        }
        guesses++;
    } while (answer != guess);

    return 0;
}