#include <stdio.h>

int main(){
    long long n,max = 0;

    while(scanf("%lld",&n)==1)//Doc cho den het gia tri nhap
    {
        if(n>max)
        {
            max=n;
        }
    }
    printf("%lld",max);

}