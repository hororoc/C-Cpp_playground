#include <stdio.h>

int main()
{
  printf("%o\n", 156);
  printf("%x\n", 156);

  printf("%o\n", 0xA4D);

  // printf("%b\n", 0474); // binary format specifier 는 없음.

  printf("%x %X\n", 235, 235);

  return 0;
}