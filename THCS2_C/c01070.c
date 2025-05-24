#include <stdio.h>

// Hàm tìm giá trị lớn nhất trong 3 số
int max(int a, int b, int c) {
    if (a > b && a > c) return a;
    if (b > c) return b;
    return c;
}

// Hàm kiểm tra nếu ba hình chữ nhật có thể ghép thành hình vuông
int check_square(int w1, int h1, int w2, int h2, int w3, int h3) {
    // Xoay hình chữ nhật sao cho w <= h (để dễ kiểm tra)
    if (w1 > h1) { int temp = w1; w1 = h1; h1 = temp; }
    if (w2 > h2) { int temp = w2; w2 = h2; h2 = temp; }
    if (w3 > h3) { int temp = w3; w3 = h3; h3 = temp; }

    int side = max(h1, h2, h3); // Tìm cạnh lớn nhất của hình vuông có thể có

    // Trường hợp 1: Xếp ngang thành một hàng
    if ((w1 + w2 + w3 == side) && (h1 == h2 && h2 == h3 && h3 == side)) 
        return 1;

    // Trường hợp 2: Xếp dọc thành một cột
    if ((h1 + h2 + h3 == side) && (w1 == w2 && w2 == w3 && w3 == side)) 
        return 1;

    // Trường hợp 3: Hai hình chữ nhật ghép thành một phần, hình còn lại vừa khít
    if ((w1 + w2 == side && h1 == h2) && (w3 == side && h3 == (h1 + h2))) 
        return 1;
    if ((w1 + w3 == side && h1 == h3) && (w2 == side && h2 == (h1 + h3))) 
        return 1;
    if ((w2 + w3 == side && h2 == h3) && (w1 == side && h1 == (h2 + h3))) 
        return 1;

    return 0; // Không tạo thành hình vuông
}

int main() {
    int w1, h1, w2, h2, w3, h3;

    // Nhập kích thước của 3 hình chữ nhật
    scanf("%d %d", &w1, &h1);
    scanf("%d %d", &w2, &h2);
    scanf("%d %d", &w3, &h3);

    // Kiểm tra nếu có thể ghép thành hình vuông
    if (check_square(w1, h1, w2, h2, w3, h3)) 
        printf("YES\n");
    else 
        printf("NO\n");

    return 0;
}
