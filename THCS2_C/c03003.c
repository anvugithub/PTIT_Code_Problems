#include <stdio.h>

int isPrime(int n){
    if(n < 2) return 0;
    for(int i = 2; i*i <= n; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n; scanf("%d",&n);
    int printed = 0, running = 2;
    while(printed < n){
        if(isPrime(running)){
            printf("%d\n",running);
            printed++;
            running++;
        }
        else{
            running++;
        }
    }
}