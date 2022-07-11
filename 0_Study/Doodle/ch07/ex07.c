#include <stdio.h>

typedef struct {
    int num;
    char name[100];
    int cost;
} ProductInfo;

void productSwap(ProductInfo *a, ProductInfo *b) {
    ProductInfo tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    ProductInfo myProduct = {4797283, "제주 한라봉", 19900};
    ProductInfo yourProduct = {4797284, "성주 꿀참외", 10000};

    productSwap(&myProduct, &yourProduct);

    printf("상품 번호: %d\n", myProduct.num);
    printf("상품 이름: %s\n", myProduct.name);
    printf("상품 가격: %d원\n", myProduct.cost);

    return 0;
}