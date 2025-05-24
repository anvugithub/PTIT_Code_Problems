#include <stdio.h>
#include <math.h>

int main(){
    long long n;
    scanf("%lld",&n);
    n = abs(n);
    long long o = n;
    long long s = 1;

    while(n!=0){
        long long r = n%10;
        s = s*r;
        n = n/10;
    }
    printf("%lld",s);
    
}