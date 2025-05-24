#include <stdio.h>

int main(){
    long long a,b;
    scanf("%lld %lld",&a,&b);
    if(b!=0){
        printf("%d\n%d\n%lld\n%d\n%d\n%.2lf",a+b,a-b,(long long)a*b,a/b,a%b,(float)a/b);
    }


}