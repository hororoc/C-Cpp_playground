#include <stdio.h>

int main()
{
  double height, weight, result;

  printf("키와 몸무게를 차례로 입력하세요: ");
  scanf("%lf %lf", &height, &weight);
  height = height / 100;

  result = weight / (height * height);

  if (result >= 30)
  {
    printf("비만\n");
  }
  else if (result >= 25)
  {
    printf("과체중\n");
  }
  else if (result >= 20)
  {
    printf("정상\n");
  }
  else if (result < 20)
  {
    printf("저체중\n");
  }

  return 0;
}