#include <stdio.h>

int main()
{
  int i = 1, j = 9;

  printf("%d & %d = %d\n", i, j, i & j);
  printf("%d | %d = %d\n", i, j, i | j);
  printf("%d ^ %d = %d\n", i, j, i ^ j);

  return 0;
}