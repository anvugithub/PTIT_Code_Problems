#include <stdio.h>

int isPalindrome(long long n){
    long long o = n, r = 0;
    while(n != 0){
        r = r*10 + n % 10;
        n /= 10;
    }
    return(o == r);
}

int isAllOdd(long long n){
    while(n!=0){
        if((n%10)%2 == 0) return 0;
        n /= 10; 
    }
    return 1;
}

int isOddSum(long long n){
    int sum = 0;
    while(n!=0){
        sum+=n%10;
        n /= 10;
    }
    return(sum % 2 != 0);
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        long long n; scanf("%lld",&n);
        if(isPalindrome(n) && isOddSum(n) && isAllOdd(n)){
            printf("YES\n");
        }
        else printf("NO\n");
    }
}