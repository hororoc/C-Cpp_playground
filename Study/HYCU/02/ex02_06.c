#include <stdio.h>

int main()
{
  int i, j;
  char op;

  printf("연산식을 적어보세요(+와 -만 연산 가능): ");
  scanf("%d%c%d", &i, &op, &j);

  /* if ~ else */
  if (op == '+')
  {
    printf("%d + %d = %d\n", i, j, i + j);
  }
  else if (op == '-')
  {
    printf("%d - %d = %d\n", i, j, i - j);
  }
  else
  {
    printf("잘못된 연산자입니다.\n");
  }

  /* switch ~ case */
  switch (op)
  {
  case '+':
    printf("%d + %d = %d\n", i, j, i + j);
    break;
  case '-':
    printf("%d - %d = %d\n", i, j, i - j);
    break;
  default:
    printf("잘못된 연산자입니다.\n");
    break;
  }

  return 0;
}