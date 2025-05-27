#include <stdio.h>
#include <string.h>

int isPalindrome(int n){
    int reversed = 0, original = n;
    while(n != 0){
        int r = n % 10;
        reversed = reversed * 10 + r;
        n /= 10;
    }

    if(original == reversed) return 1;
    return 0;
}

int isPrime(int n){
    if(n < 2) return 0;
    for(int i = 2; i*i <= n; i++){
        if(n%i == 0) return 0;
    }
    return 1;
}

int main(){
    int t; scanf("%d",&t);
    for(int i = 1; i <= t; i++){
        int a,b; scanf("%d%d",&a,&b);
        int count = 0;
        for(int i = a; i <= b; i++){
            if(isPalindrome(i) && isPrime(i)){
                printf("%d ",i);
                count++;
                if(count % 10 == 0) printf("\n");
            }
        }
            printf("\n\n");
        
    }
}