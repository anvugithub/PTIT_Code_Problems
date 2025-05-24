#include <stdio.h>

int main() {
    int x1, y1, x2, y2;
    int x3, y3, x4, y4;

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    scanf("%d %d %d %d", &x3, &y3, &x4, &y4);

    int x_min = (x1 < x3) ? x1 : x3;
    int y_min = (y1 < y3) ? y1 : y3;
    int x_max = (x2 > x4) ? x2 : x4;
    int y_max = (y2 > y4) ? y2 : y4;

    int width = x_max - x_min;
    int height = y_max - y_min;
    int side = (width > height) ? width : height;

    int area = side * side;

    printf("%d\n", area);

}
