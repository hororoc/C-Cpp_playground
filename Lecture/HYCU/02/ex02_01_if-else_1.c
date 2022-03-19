#include <stdio.h>

int main()
{
  int i, j;
  char op;

  printf("연산식: ");
  scanf("%d%c%d", &i, &op, &j);

  // switch (op)
  // {
  // case '+':
  //   printf("%d + %d = %d\n", i, j, i + j);
  //   break;
  // case '-':
  //   printf("%d - %d = %d\n", i, j, i - j);
  //   break;
  // default:
  //   printf("Wrong operation\n");
  //   break;
  // }

  if (op == '+')
  {
    printf("%d + %d = %d\n", i, j, i + j);
  }
  else if (op == '-')
  {
    printf("%d - %d = %d\n", i, j, i - j);
  }
  else if (op == '/')
  {
    printf("%d / %d = %f\n", i, j, (float)i / j);
  }
  else
  {
    printf("Wrong operation\n");
  }

  return 0;
}