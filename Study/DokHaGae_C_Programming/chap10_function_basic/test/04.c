#include <stdio.h>

int nInput = 100;

void TestFunc(void)
{
    printf("%d\n", nInput);
}

int main(void)
{
    int nInput = 0;
    scanf("%d", &nInput);

    if (nInput > 10)
    {
        int nInput = 20;

        printf("%d\n", nInput);  // 20

        TestFunc();  // 100

        if (nInput >= 100)
        {
            printf("%d\n", nInput);  // 100 ~
        }
    }

    printf("%d\n", nInput);  // nInput

    return 0;
}