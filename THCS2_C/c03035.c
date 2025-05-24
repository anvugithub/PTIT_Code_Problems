#include <stdio.h>

int isCoPrime(long long a, long long b)
{
    int min = a < b ? a : b;
    for(int i = min; i >= 2; i--)
    {
        if(a%i==0 && b%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--)
    {
    
        long long n,reversed_n = 0;
        scanf("%lld",&n);
        long long original = n;

        while(n!=0)
        {
            reversed_n = reversed_n * 10 + n % 10;
            n = n/10;
        }

    //  printf("%lld",reversed_n);

        if(isCoPrime(original,reversed_n))
        {
        // printf("%d",isCoPrime(n,reversed_n));
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }

}