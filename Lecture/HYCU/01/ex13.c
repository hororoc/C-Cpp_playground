#include <stdio.h>

int main()
{
  int a;

  printf("a = ");
  scanf("%d", &a);

  a % 2 == 0 ? printf("even number\n") : printf("odd number\n");

  return 0;
}