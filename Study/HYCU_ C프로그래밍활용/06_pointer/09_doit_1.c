#include <stdio.h>

int main(void)
{
  int i = 10;

  printf("i의 주소 = %p\n", &i);
  printf("i의 주소가 가리키는 값 = %d\n", *(&i));

  return 0;
}