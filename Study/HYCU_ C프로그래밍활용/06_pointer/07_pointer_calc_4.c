#include <stdio.h>

int main(void)
{
  int i = 10;
  int *ptr = &i;

  printf("&i = %d, i = %d\n", &i, i);
  printf("ptr = %d, *ptr = %d\n", ptr, *ptr);

  printf("\n");
  printf("case 3) *(++ptr)\n");
  (*ptr)++;
  *(++ptr);

  printf("&i = %d, i = %d\n", &i, i);
  printf("ptr = %d, *ptr = %d\n", ptr, *ptr);

  return 0;
}