#include <stdio.h>

typedef struct {
    int num;
    char name[101];
    int cost;
} ProductInfo;

int main() {
    ProductInfo myProduct = {4797283, "제주 한라봉", 19900};

    printf("%lu\n", sizeof(myProduct));
    printf("%d\n", &myProduct);
    printf("%d\n", &myProduct.num);
    printf("%d\n", myProduct.name);
    printf("%d\n", &myProduct.cost);

    return 0;
}