#include <stdio.h>


int tongCS(int n){
    int sum = 0;
    while(n!=0){
        int d = n%10;
        sum+=d;
        n/=10;
    }
    return sum;
}

int tongNT(int n){
    int sum = 0;
    for(int i = 2; i*i <= n; i++){
        while(n%i==0){
            sum+=tongCS(i);
            n/=i;
        }
    }
    if(n > 1) sum+=tongCS(n);
    return sum;
}


int laSNT(int n){
    if(n<2) return 0;
    for(int i = 2; i*i <= n; i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int main(){
    int n; scanf("%d",&n);
    if(tongCS(n) == tongNT(n) && !laSNT(n)){
        printf("YES");
    }
    else printf("NO");
}