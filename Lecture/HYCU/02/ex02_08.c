#include <stdio.h>

int main()
{
  float height, weight;

  printf("키와 몸무게를 차례대로 입력하세요:\n");
  scanf("%f %f", &height, &weight);

  if (height >= 145 && weight >= 40)
  {
    printf("탑승 가능\n");
  }
  else
  {
    printf("탑승 불가능\n");
  }

  return 0;
}