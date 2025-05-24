#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n, s = 0;
        scanf("%lld",&n);
        while(n!=0){
            s = s + n%10;
            n = n/10;
        }
        printf("%lld\n",s);
    }
}