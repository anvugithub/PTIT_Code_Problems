#include <stdio.h>
#include <string.h>

char roman[7] = {'I','V','X','L','C','D','M'};
int decimal[7] = {1, 5, 10, 50, 100, 500, 1000};

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char n[100];
        scanf("%s", n);
        int ans = 0;

        for (int i = 0; i < strlen(n); i++) {
            int k = 0;

            for (int j = 0; j < 7; j++) {
                if (n[i] == roman[j]) {
                    k = decimal[j];
                }
            }

            int k1 = 0;

            if (i < strlen(n) - 1) { // tránh duyệt tới ký tự không tồn tại
                for (int j = 0; j < 7; j++) {
                    if (n[i + 1] == roman[j]) {
                        k1 = decimal[j];
                    }
                }
            }

            if (k < k1) {
                ans += k1 - k;
                i++; // bỏ qua ký tự tiếp theo nếu k < k1 sau khi đã cộng (k1 - k)
            } else {
                ans += k;
            }
        }

        printf("%d\n", ans);
    }
}
