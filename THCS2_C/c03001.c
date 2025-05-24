#include <stdio.h>

int isDivisiblebyTen(int n){
    int sum = 0;
    while(n != 0){
        int last_digit = n%10;
        sum+=last_digit;
        n/=10;
    }
    if(sum%10==0) return 1;
    return 0;
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        if(isDivisiblebyTen(n)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}