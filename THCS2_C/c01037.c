#include <stdio.h>

int main(){
    long long a,b,tmp;
    scanf("%lld %lld",&a,&b);

    if(a > b){
        tmp = a;
        a = b;
        b = tmp;
    }

    long long i,s=0;
    for (i = a; i < b+1;i++){
        s=s+i;
    }
    printf("%d",s);

}