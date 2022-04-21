#define MAX 200
#include <stdio.h>

int main(void)
{
  int i;
  int num;
  int fib[MAX];

  printf("Enter a number N.\n");
  scanf("%d", &num);

  fib[0] = fib[1] = 1;

  for (i = 2; i <= num; i++)
    fib[i] = fib[i - 1] + fib[i - 2];

  printf("%dth fibonacci number is %d.\n", num, fib[i - 1]);
}