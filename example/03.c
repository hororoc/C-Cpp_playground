#include <stdio.h>
void getVal(float *, int); // 가

int main(void)
{
  int i;
  float score[3] = {0};
  getVal(score, 3);

  for (i = 0; i < 3; i++)
  {
    printf("score[%d]: %f\n", i, score[i]);
  }

  return 0;
}

void getVal(float *a, int b)
{ // 나
  int i;
  for (i = 0; i < b; i++)
  {
    printf("a[%d]: \n", i);
    scanf("%f", a + i);
  }
}