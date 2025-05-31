#include <stdio.h>

int laSoGiam(int n){
    int soSau = -10;
    while(n!=0){
        int so = n % 10;
        if(so <= soSau) return 0;
        soSau = so;
        n /= 10;
    }
    return 1;
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int a,b, count = 0; scanf("%d %d",&a,&b);
        for(int i = a; i <= b; i++){
            if(laSoGiam(i)) count++;
        }
        printf("%d\n",count);
    }
}