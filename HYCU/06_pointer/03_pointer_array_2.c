#include <stdio.h>

int main(void)
{
  int arr[5] = {1, 2, 3, 4, 5};
  int *arrptr;

  arrptr = arr;

  for (int i = 0; i < 5; i++)
  {
    printf("arr    > arr[%d] = %d\n", i, arr[i]);
    // printf("arr    > arr[%d] = %d\n", i, *(arr + i));
    // printf("arrptr > arr[%d] = %d\n", i, arrptr[i]);
    // printf("arrptr > arr[%d] = %d\n", i, *(arrptr + i));
    printf("\n");
  }

  return 0;
}