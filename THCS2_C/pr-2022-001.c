#include <stdio.h>
#include <math.h>

int main(){
    int u0,d,n; scanf("%d %d %d",&u0,&d,&n);
    int numerator = n*(2*u0+(n-1)*d);

    printf("%d",numerator/2); 
}