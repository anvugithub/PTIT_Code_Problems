#include <stdio.h>

int isDivisiblebyFive(int n){
    int sum = 0;
    while(n != 0){
        int last_digit = n%10;
        sum+=last_digit;
        n/=10;
    }
    if(sum%5==0) return 1;
    return 0;
}

int isPrime(int n){
    if(n < 2) return 0;
    for(int i = 2; i*i <= n; i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int main(){
    int count = 0;
    int n; scanf("%d",&n);
    for(int i = 2; i < n; i++){
        if(isDivisiblebyFive(i) && isPrime(i)){
            printf("%d ",i);
            count++;
        }
    }
    printf("\n%d",count);
}