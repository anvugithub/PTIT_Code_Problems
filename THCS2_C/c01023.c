#include <stdio.h>

int biggestDigit(long long n)
{
    int biggest = 0;
    while(n!=0)
    {
        if(biggest < n%10)
        {
            biggest = n%10;
        }
        n=n/10;
    }
    return biggest;
}

int smallestDigit(long long n)
{
    int smallest = 9;
    while(n!=0)
    {
        if(smallest > n%10)
        {
            smallest = n%10;
        }
        n=n/10;
    }
    return smallest;
}

int main()
{
    long long t;
    scanf("%lld",&t);
    while (t--)
    {
        long long n;
        scanf("%lld",&n);
        printf("%lld %lld\n",biggestDigit(n),smallestDigit(n));
    }
}