#include <stdio.h>
#include <math.h>

int main(void)
{
  double a, b, c;
  a = ceil(3.54);
  b = floor(3.54);
  c = a + b;
  printf("a + b = %lf\n", c);

  return 0;
}
