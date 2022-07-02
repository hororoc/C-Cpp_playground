#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i = 0;
    int maxIndex = 0;

    int kor[100];
    int eng[100];
    int math[100];
    int total[100];
    float avr[100];

    srand(time(NULL));

    for (i = 0; i < 100; i++)
    {
        kor[i] = rand() % 101;
        eng[i] = rand() % 101;
        math[i] = rand() % 101;

        total[i] = kor[i] + eng[i] + math[i];
        avr[i] = total[i] / 3.0;

        if (total[i] > total[maxIndex])
        {
            maxIndex = i;
        }
    }

    for (i = 0; i < 100; i++)
    {
        printf("%d]\t %d\t %d\t %d\t %d\t %.2f\n", i, kor[i], eng[i], math[i], total[i], avr[i]);
    }
    printf("Max Index: %d\n", maxIndex);

    return 0;
}