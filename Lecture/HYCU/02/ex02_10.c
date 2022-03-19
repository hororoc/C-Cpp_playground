#include <stdio.h>

int main()
{
  int n;

  printf("n을 입력하세요\n");
  scanf("%d", &n);

  if ((1 + n) / 2 >= 50)
  {
    printf("유의미\n");
  }
  else
  {
    printf("무의미\n");
  }

  return 0;
}