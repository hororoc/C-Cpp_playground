#include <stdio.h>
#define PI 3.14

int main()
{
  float r;

  printf("r: ");
  scanf("%f", &r);

  printf("r = %f, area = %f\n", r, r * r * PI);

  return 0;
}