#include <stdio.h>

typedef struct {
    int num;
    char name[100];
    int cost;
} ProductInfo;

int main() {
    ProductInfo myProduct = {4797283, "제주 한라봉", 19900};

    printf("%lu\n", sizeof(myProduct));
    printf("%p\n", &myProduct);
    printf("%p\n", &myProduct.num);
    printf("%p\n", myProduct.name);
    printf("%p\n", &myProduct.cost);

    return 0;
}