#include <stdio.h>

/*
Số Fibonacci: Số fibonacci thứ n bằng tổng 2 số fibonacci trước nó
tức f(n) = f(n-1)+f(n-2)

Như chương trình dưới, biến fn1 là f(n-1) và tương tự.

f(1) = 1, f(2) = 1
*/

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b; scanf("%d %d",&a,&b);

        long long fibo[93];
        fibo[0] = 1;
        fibo[1] = 1;
        for(int i=2;i<=b;i++){
            fibo[i] = fibo[i-1] + fibo[i-2];
        }
        for(int i = a; i <= b; i++){
            printf("%lld ",fibo[i - 1]);
        }
        printf("\n");
    }
}