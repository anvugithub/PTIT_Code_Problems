#include <stdio.h>
#include <math.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        n = abs(n);
        long long o = n;
        long long s = 0;

        while(n!=0){
            long long r = n%10;
            s = s + r;
            n = n/10;
        }
        printf("%lld",s);
    }
}