#include <stdio.h>

int convertYear(int year)
{
    return year - 543;
}

int main()
{
    int y = 0;

    scanf("%d", &y);
    if (y < 1000 || y > 3000) return 0;

    printf("%d", convertYear(y));

    return 0;
}