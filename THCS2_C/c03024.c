#include <stdio.h>

int sumofdigits(int n){
    int s = 0;
    while(n != 0){
        int d = n %10;
        s+=d;
        n /= 10;
    }
    return s;
}

int main(){
    int a,b; scanf("%d %d",&a,&b);
    int s_a = sumofdigits(a), s_b = sumofdigits(b);

    if(s_a < s_b || s_a == s_b){
        printf("%d %d",a,b);
    }
    else{
        printf("%d %d",b,a);
    }

}