#include <stdio.h>

int main()
{
  int a = 1;

  for (int i = 0; i < 10; i++)
  {
    printf("a = %d\n", a++);
  }

  return 0;
}