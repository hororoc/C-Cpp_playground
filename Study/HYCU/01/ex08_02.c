#include <stdio.h>

int main()
{
  int i, j, k, max;

  scanf("%d %d %d", &i, &j, &k);

  // i > j ? max = i : max = j;
  // max > k ?: max = k;

  if (i > j)
  {
    max = i;
  }
  else
  {
    max = j;
  }

  if (max < k)
  {
    max = k;
  }

  printf("max = %d\n", max);

  return 0;
}