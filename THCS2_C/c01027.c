#include <stdio.h>



int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long a,b;
        scanf("%lld %lld",&a,&b);

        if(a==b){
            printf("%lld\n",a);
            continue;
        }

        if(a==0 || b==0){
            printf("%lld\n",a+b);
            continue;
        }

        while(a!=0){
/*
Thuật toán Euclid
*/
            long long tmp = a;
            a = b % a;
            b = tmp;
        }

        printf("%lld\n",b);

    }
}