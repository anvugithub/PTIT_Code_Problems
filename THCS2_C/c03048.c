#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int t; scanf("%d",&t);

    while(t--){
        char n[18]; scanf("%s",n);
        int evenCount = 0, oddCount = 0;

        for(int i = 0; i < strlen(n); i++){
            if(n[i]%2==0){
                evenCount+=1;
            }
            else{
                oddCount+=1;
            }
        }

        //printf("even%d;odd%d",evenCount,oddCount);

        if(evenCount > oddCount && (n[strlen(n) - 1] - '0')%2==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}