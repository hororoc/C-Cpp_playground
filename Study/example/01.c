#include <stdio.h>
void add(int, int);

int main(void)
{
  add(2, 3);

  return 0;
}

void add(int a, int b)
{
  printf("%d %d", a, b);
}