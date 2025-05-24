#include <stdio.h>

int laSoHoanHao(int n){
    int sum = 1; // 1 luôn là ước
    // Nếu i là ước của n thì n/i cũng là ước.
    for(int i = 2; i*i <= n; i++){
        if(n%i==0){ 
            sum+=i;
            if(i != n/i) sum += n/i;
        }
    }
    return sum==n && n != 1;
}

int main(){
    int a,b; scanf("%d %d",&a,&b);
    if(a<b){
        for(int i = a; i <= b; i++){
            if(laSoHoanHao(i)) printf("%d ",i);
        }
    }
    else{
        for(int i = a; i >= b; i--){
            if(laSoHoanHao(i)) printf("%d ",i);
        }
    }
}