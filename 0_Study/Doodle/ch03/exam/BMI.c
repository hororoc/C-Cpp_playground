#include <stdio.h>

int main()
{
    double weight, height;
    double bmi;

    printf("체중(kg) 입력: ");
    scanf("%lf", &weight);
    printf("키(m) 입력: ");
    scanf("%lf", &height);

    bmi = weight / (height * height);

    printf("BMI: %f\n", bmi);
}