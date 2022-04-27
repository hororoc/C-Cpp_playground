#include <stdio.h>

int main()
{
  int a = 1;
  float b;
  double c;
  char d;

  printf("%lu %lu %lu %lu\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d));

  return 0;
}