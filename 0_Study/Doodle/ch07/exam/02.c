#include <stdio.h>

typedef struct {
    int x, y;
} Point;

void swapXY(Point *p) {
    // x좌표와 y좌표를 교환
    int tmp = p->x;
    p->x = p->y;
    p->y = tmp;
}

int main() {
    Point pos = {3, 4};

    swapXY(&pos);

    printf("(%d, %d)\n", pos.x, pos.y);

    return 0;
}