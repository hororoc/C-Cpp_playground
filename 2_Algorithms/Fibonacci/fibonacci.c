#include <stdio.h>

int main(void)
{
  int max;

  printf("Enter a number N.\n");
  scanf("%d", &max);

  int fib[max];

  if (max == 1)
  {
    fib[0] = 1;

    printf("1th fibonacci number is %d\n", fib[0]);
  }
  else
  {
    fib[0] = 1;
    fib[1] = 1;

    for (int i = 2; i < max; i++)
    {
      fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (int i = 0; i < max; i++)
    {
      printf("%d\n", i);
      printf("%dth fibonacci number is %d\n", i + 1, fib[i]);
    }
  }

  return 0;
}