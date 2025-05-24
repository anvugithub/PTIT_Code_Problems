#include <stdio.h>
#include <math.h>

int main(){
    int tests;
    scanf("%d",&tests);

    while(tests--){
        long long x;
        scanf("%lld",&x);

        long long root = sqrt(x);

        if (root*root==x){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}