#include <stdio.h>

int isPrime(int n){
    if(n < 2) return 0;
    for(int i = 2; i*i <= n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int fibo[93];
void fibonacci(){
    fibo[0] = 1;
    fibo[1] = 1;
    for(int i = 2; i <= 92; i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
}

int fibocheck(int n){
    int sum = 0, tmp;
    while(n != 0){
        int digit = n % 10;
        sum+=digit;
        n /= 10;
    }
    for(int i = 0; i <= 92; i++){
        if(fibo[i] == sum) return 1;
    }
    return 0;
}

int main(){
    int a,b; scanf("%d%d",&a,&b);
    fibonacci();
    
    if(a > b){
        int tmp = a;
        a = b;
        b = tmp;
    }

    for(int i = a; i <= b; i++) if(isPrime(i) && fibocheck(i)) printf("%d ",i);
    
}