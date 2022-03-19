#include <stdio.h>

int main()
{
  int month;

  printf("월을 입력하세요: ");
  scanf("%d", &month);

  switch (month)
  {
  case 3:
  case 4:
  case 5:
    printf("봄입니다.\n");
    break;
  case 6:
  case 7:
  case 8:
    printf("여릅입니다.\n");
    break;
  case 9:
  case 10:
  case 11:
    printf("가을입니다.\n");
    break;
  case 12:
  case 1:
  case 2:
    printf("겨울입니다.\n");
    break;
  default:
    printf("잘못 입력하셨습니다.\n");
    break;
  }

  return 0;
}