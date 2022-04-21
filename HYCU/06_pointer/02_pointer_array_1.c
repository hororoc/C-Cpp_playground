#include <stdio.h>

int main(void)
{
  int a[3] = {1, 2, 3};

  printf("a = %u\n", a);
  printf("a[0] = %d\n", *a);
  printf("a[1] = %d\n", *(a + 1));
  printf("a[2] = %d\n", *(a + 2));

  return 0;
}