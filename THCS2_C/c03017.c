#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        long long n;
        scanf("%lld",&n);
        
        long long original = n;
        long long reversed=0;
        
        while(n>0){
            reversed = reversed * 10 + (n%10);
            n /=10;
        }

        //printf("%d %d",reversed,original);

        if(original==reversed){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

}