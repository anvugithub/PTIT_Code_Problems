#include <stdio.h>
#include <math.h>
#include <string.h>

int count[100001];

int main(){
    int t; scanf("%d",&t);
    int current_case = 1;
    while(t--){
        int n; scanf("%d",&n);

        int x, max_value = -1;
        for(int i = 0; i < n; i++){
            scanf("%d",&x);
            int isPrime = 1;
            for(int j = 2; j <= sqrt(x); j++){
                if(x%j==0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime){
                count[x]++;
                if(x>max_value) max_value = x;
            }


        }

        printf("Test %d:\n",current_case);
        current_case++;

        for(int i = 2; i <= max_value; i++){
            if(count[i]!=0){
                printf("%d xuat hien %d lan\n",i,count[i]);
            }
        }

        memset(count, 0, sizeof(count)); // Cho hết count về 0

    }
}