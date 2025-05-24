#include <stdio.h>

int main(){
    int n; scanf("%d",&n);
    // Duyệt n dòng
    for(int i = 1; i <= n; i++){
        // In i dấu *
        for(int j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
}