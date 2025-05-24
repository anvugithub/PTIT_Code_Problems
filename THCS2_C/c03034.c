#include <stdio.h>
#include <math.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,acceptedCount = 0;
        scanf("%lld",&n);
        for(long long i = 1; i <= sqrt(n); i++){
            if(n%i==0){
               // printf("%lld ",i);
                if(i%2==0){
                    acceptedCount += 1;
                }
                if(i != n/i && (n/i) % 2 == 0){
                    acceptedCount += 1;
                }
            }
        }
        printf("%lld\n",acceptedCount);
    }
}