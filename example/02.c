#include <stdio.h>

int main(void)
{
  int arr[3] = {1, 2, 3};
  int *pa, i;

  for (i = 0; i < 3; i++)
  {
    printf("arr[%d] = %d\n", i, arr[i]);
  }

  return 0;
}