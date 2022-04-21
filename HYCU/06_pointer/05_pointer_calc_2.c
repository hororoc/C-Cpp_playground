#include <stdio.h>

int main(void)
{
  int i = 10;
  int *ptr = &i;

  printf("case 1) ptr++\n");
  ptr++;

  printf("&i = %d, i = %d\n", &i, i);
  printf("ptr = %d, *ptr = %d\n", ptr, *ptr);

  return 0;
}