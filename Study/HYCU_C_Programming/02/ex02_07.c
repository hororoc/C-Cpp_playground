#include <stdio.h>

int main()
{
  int num;

  printf("num: ");
  scanf("%d", &num);

  if (num > 1000)
  {
    printf("error!!\n");
  }
  else
  {
    printf("%d\n", num % 10);
  }

  return 0;
}
