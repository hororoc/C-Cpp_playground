#include <stdio.h>

int main()
{
  int i;

  scanf("%d", &i);

  // if (i % 2 == 0)
  // {
  //   printf("Even\n");
  // }
  // else
  // {
  //   printf("Odd\n");
  // }

  i % 2 == 0 ? printf("Even\n") : printf("Odd\n");

  return 0;
}