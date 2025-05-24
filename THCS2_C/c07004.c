#include <stdio.h>

typedef struct{
    long long numerator, demoninator;
} Fraction;

// Tìm UCLN xong chia cả tử và mẫu cho UCLN.

long long gcd(long long a, long long b){
    while(b!=0){
        long long r = a%b;
        a = b;
        b = r;
    }
    return a;
}

Fraction simplify(Fraction frac){
    long long cd = gcd(frac.numerator, frac.demoninator);
    frac.numerator /= cd;
    frac.demoninator /= cd;
    return frac;
}

int main(){
    Fraction frac; scanf("%lld %lld",&frac.numerator,&frac.demoninator);
    frac = simplify(frac);
    printf("%lld/%lld",frac.numerator,frac.demoninator);
}