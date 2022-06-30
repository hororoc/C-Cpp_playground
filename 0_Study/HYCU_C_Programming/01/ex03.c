#include <stdio.h>

int main()
{
  int a = 1, b = 2;
  // a -> 0000...0001
  // b -> 0000...0010

  printf("%d\n", a & b);
  printf("%d\n", a | b);

  return 0;
}