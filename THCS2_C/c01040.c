#include <stdio.h>

int main(){
    long long n, tongUoc = 0;
    scanf("%lld",&n);
    for(int i = 1; i < n; i++){
        if(n%i==0){
            tongUoc += i;
            //printf("%d",i);
        }
    }
    
    if(tongUoc==n){
        printf("1");
    }
    else{
        printf("0");
    }
}