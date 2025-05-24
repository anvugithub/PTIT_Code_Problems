#include <stdio.h>

int main(){
    long long n;
    scanf("%lld",&n);
    int isFound = 0;
    long long fibo[n];
    fibo[0] = 1;
    fibo[1] = 1;
    for(int i = 2; i < n; i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
        if(fibo[i] == n){
            isFound = 1;
            break;
        }
    }

    if(n == 1 || isFound){
        printf("1");
    }
    else{
        printf("0");
    }
}