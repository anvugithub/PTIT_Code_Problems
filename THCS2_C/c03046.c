#include <stdio.h>
#include <math.h>

int laThuanNghich(int n){
    int o = n, r = 0;
    while(n!=0){
        r = r*10+n%10; n/=10;
    }
    return(o == r);
}

int tongCSchiahet10(int n){
    int s = 0;
    while(n!=0){
        s+=n%10;
        n/=10;
    }
    return(s%10==0);
}

int khongcoSo4(int n){
    while(n!=0){
        if(n%10 == 4) return 0;
        n/=10;
    }
    return 1;
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        int start = pow(10, n - 1), end = start*10;
        for(int i = start; i < end; i++){
            if(laThuanNghich(i) && tongCSchiahet10(i) && khongcoSo4(i)) printf("%d ",i);
        }
        printf("\n");
    }
}