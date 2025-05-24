#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        long long odd=0,even=0;
        while(n!=0){
            long long digit;
            digit=n%10;
            n=n/10;
            if(digit%2==0){
                even=even+1;
            }
            else{
                odd = odd + 1;
            }
        }
        printf("%lld %lld\n",odd,even);
    }
}
