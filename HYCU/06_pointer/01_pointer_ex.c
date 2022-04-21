#include <stdio.h>

int main(void)
{
  int i = 100;
  int *ptr = &i;

  printf("%p\n", &i);
  printf("%p\n", ptr);

  return 0;
}