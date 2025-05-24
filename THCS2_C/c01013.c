#include <stdio.h>

int main(){
    long long n,max = 0, min = n;

    while(scanf("%lld",&n)==1)//Doc cho den het gia tri nhap
    {
        if(n>max)
        {
            max=n;
        }

        if(n<min)
        {
            min = n;
        }
    }
    printf("%lld %lld",max,min);

}