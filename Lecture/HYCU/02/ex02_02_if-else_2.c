#include <stdio.h>

int main()
{
  int num;

  printf("정수: ");
  scanf("%d", &num);

  if (num > 100)
  {
    printf("큰 수 입니다.\n");
  }

  return 0;
}