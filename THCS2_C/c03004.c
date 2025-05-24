#include <stdio.h>

long long gcd(long long a, long long b){
    while(b!=0){
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}

long long lcm(long long a, long long b){
    // BSCNN(a,b) = (a*b)/UCLN(a,b);
    return (a*b)/gcd(a,b);
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        long long a,b;
        scanf("%lld %lld",&a,&b);
        printf("%lld %lld\n",lcm(a,b),gcd(a,b));
    }
}