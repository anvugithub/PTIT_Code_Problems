#include <stdio.h>

int factorial[10];
void calcFact(){
    factorial[0] = 1;
    for(int i = 1; i < 9; i++){
        factorial[i] = factorial[i - 1] * i;
    }
}

int isStrongNumber(int n){
    int sum = 0, temp = n;
    while(temp > 0){
        int digit = temp % 10;
        sum += factorial[digit];
        temp /= 10;
    }
    return sum == n;
}

int main(){
    int a,b; scanf("%d %d",&a,&b);
    calcFact();

    if(a < b){
        
        for(int i = a; i <= b; i++) if(isStrongNumber(i)) printf("%d ",i);
    }
    else{
        for(int i = a; i >= b; i--) if(isStrongNumber(i)) printf("%d ",i);
    }

}