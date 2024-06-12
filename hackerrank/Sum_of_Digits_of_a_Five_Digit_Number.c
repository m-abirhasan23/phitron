#include <stdio.h>

int main()
{
  int num;

  scanf("%d", &num);

  int sum = 0;
  int temp = num;

  while (temp > 0)
  {
    sum += temp % 10;
    temp /= 10;
  }

  printf("%d\n", sum);

  return 0;
}
