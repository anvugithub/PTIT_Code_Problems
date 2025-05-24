#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i = 0; i < n; i++){
            scanf("%d",&a[i]);
        }

        int printed = 0;
        for(int i = 0; i < n; i++){
            int isPrime = 1;
            if(a[i] < 2){
                isPrime = 0;
            }
            for(int j = 2; j * j <= a[i]; j++){
                if(a[i]%j==0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime){
                if(printed) printf(" ");
                printf("%d",a[i]);
                printed = 1;
            }
        }
        printf("\n");

}
}