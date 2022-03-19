#include <stdio.h>

int main()
{
  float height;

  printf("키를 입력하세요: ");
  scanf("%f", &height);

  if (height >= 150)
  {
    printf("탑승 가능\n");
  }
  else
  {
    printf("탑승 불가능\n");
  }

  return 0;
}