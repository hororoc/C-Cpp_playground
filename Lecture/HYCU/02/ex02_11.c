#include <stdio.h>

int main()
{
  int n1, n2, n3, max;

  printf("서로 다른 n1~n3을 입력하세요\n");
  scanf("%d %d %d", &n1, &n2, &n3);

  if (n1 == n2 || n2 == n3 || n3 == n1)
  {
    printf("동일한 수는 없어야 합니다.\n");
  }
  else
  {
    if (n1 > n2)
    {
      max = n1;
    }
    else
    {
      max = n2;
    }

    if (max < n3)
    {
      max = n3;
    }

    printf("max=%d\n", max);
  }

  return 0;
}