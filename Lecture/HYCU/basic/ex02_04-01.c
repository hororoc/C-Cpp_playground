#include <stdio.h>

int main()
{
  int n;

  printf("점수를 입력하세요.\n");
  scanf("%d", &n);

  printf("당신의 점수는 %d 입니다.\n", n);

  printf("n의 주소는: %X", &n);

  return 0;
}