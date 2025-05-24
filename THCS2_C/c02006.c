#include <stdio.h>
/*

r = 3; c = 5:
*****
~*...*
~~*****

Chạy từ dòng i = 0 đến i = 2;
dòng đầu i = 0 có c dấu *
dòng cuối i = 2 có i dấu ~, c dấu *
tuy nhiên, dòng thứ i có i dấu ~, 2 dấu * ở hai đầu, c-2 dấu . ở giữa

*/

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++) {
        // In dấu ~
        for (int a = 0; a < i; a++) {
            printf("~");
        }

        for (int b = 0; b < c; b++) {
            if (b == 0 || b == (c - 1) || i == 0 || i == (r - 1)) {
                printf("*");
            } else {
                printf(".");
            }
        }

        printf("\n");
    }
}
