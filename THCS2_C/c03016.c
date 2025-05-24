#include <stdio.h>

int main(){
    int t; scanf("%d",&t);
    long long fibo[92];
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i = 2; i < 92; i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    while(t--){
        long long n; scanf("%lld",&n);
        int isFiboNum = 0;
        for(int i = 0; i < 92; i++){
            if(fibo[i] == n){
                isFiboNum = 1;
                break;
            }
        }
        if(isFiboNum){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}