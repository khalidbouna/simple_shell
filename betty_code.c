#include <stdio.h>

#define MAX_NUMBER 10

typedef struct {
    int x;
    int y;
} Point;

void print_point(Point p) {
    printf("(%d, %d)\n", p.x, p.y);
}

int main(void) {
    Point point = {1, 2};

    for (int i = 0; i < MAX_NUMBER; ++i) {
        if (i % 2 == 0) {
            point.x += i;
        } else {
            point.y += i;
        }
    }

    print_point(point);

    return 0;
}
