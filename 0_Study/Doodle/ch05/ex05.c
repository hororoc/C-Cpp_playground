#include <stdio.h>

int main() {
    int n;
    int arr[1000];

    printf("입력할 숫자를 입력하세요: ");
    scanf("%d", &n);

    printf("숫자 %d개를 입력하세요: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (max < arr[i])
            max = arr[i];
    }

    printf("최댓값: %d\n", max);

    return 0;
}