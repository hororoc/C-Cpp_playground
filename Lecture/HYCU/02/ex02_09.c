#include <stdio.h>

int main()
{
  double height, weight, result;
  int temp;

  printf("키와 몸무게를 차례로 입력하세요:\n");
  scanf("%lf %lf", &height, &weight);

  result = weight / (height * height);

  printf("if ~ else 처리의 경우\n");
  if (result >= 30)
  {
    temp = 1;
  }
  else if (result >= 25)
  {
    temp = 2;
  }
  else if (result >= 20)
  {
    temp = 3;
  }
  else
  {
    temp = 4;
  }

  if (temp == 1 || temp == 2 || temp == 4)
  {
    printf("주의\n");
  }
  else
  {
    printf("GOOD\n");
  }

  printf("switch ~ case 처리의 경우\n");
  switch (temp)
  {
  case 1:
  case 2:
  case 4:
    printf("주의\n");
    break;
  default:
    printf("GOOD\n");
    break;
  }

  return 0;
}