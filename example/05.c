#include <stdio.h>
int i;
void print_i(void);

int main(void)
{
  int i = 10;
  printf("1) i = %d \t", i);
  i += 2;
  print_i();

  return 0;
}

void print_i(void)
{
  i += 2;
  printf("2) i = %d\n", i);
}