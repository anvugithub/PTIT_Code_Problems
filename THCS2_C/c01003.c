#include <stdio.h>
int main(){
    int i;
    scanf("%lld",&i);
    while (i--){
        long long n;
        scanf("%lld",&n);
        printf("%lld\n",n*n);
    }
}