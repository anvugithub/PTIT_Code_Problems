#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    long long o = n, s = 0;

    while (n != 0) {
        long long r = n % 10;
        n = n / 10;

        long long f = 1;
        for(int i = 1; i <= r; i++) {
            f = f * i;
        }

        s = s + f;
    }

    if (s == o)
        printf("1\n");
    else
        printf("0\n");

}
