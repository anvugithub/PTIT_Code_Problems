#include <stdio.h>
#include <math.h>

int main() {
    int n; 
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        int isPrime = 1;

        if (a[i] < 2) {
            isPrime = 0;
        } else {
            for (int j = 2; j <= sqrt(a[i]); j++) {
                if (a[i] % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime) {
            ++count;
        }
    }

    printf("%d ", count);

    for (int i = 0; i < n; i++) {
        int isPrime = 1;

        if (a[i] < 2) {
            isPrime = 0;
        } else {
            for (int j = 2; j <= sqrt(a[i]); j++) {
                if (a[i] % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
