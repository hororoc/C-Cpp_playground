#include <stdio.h>

int main()
{
    printf("%lu %lu %lu %lu\n", sizeof(int), sizeof(char), sizeof(float), sizeof(double));
    int a;
    char b;
    float c;
    double d;
    printf("%lu %lu %lu %lu\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d));
}