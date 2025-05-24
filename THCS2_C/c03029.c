#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int i;
        char n[18];
        scanf("%s",n);
        if(((n[strlen(n) - 1]) - '0') % 2 != 0){
            printf("NO\n");
            continue;
        }
        for(i = 0; i < strlen(n) - 1; i++){
            if((n[i] - '0') % 2 != 0){
                printf("NO\n");
                break;
            }
        }
        if(i==strlen(n) - 1) printf("YES\n");
    }

}