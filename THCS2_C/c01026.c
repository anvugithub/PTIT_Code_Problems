#include <stdio.h>
#include <math.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n, isPrime = 1;
        scanf("%d",&n);
        for(int i = 2; i <= sqrt(n); i++){
            if(n%i==0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

}