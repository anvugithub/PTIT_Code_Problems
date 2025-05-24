#include <stdio.h>


int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n); int a[n];
        int found[30000] = {0};
        int printed[30000] = {0};
        int max = 0;
        for(int i = 0; i < n; i++){
            scanf("%d",&a[i]);
        }

        for(int i = 0; i < n; i++){
            found[a[i]]++;
            if(max < found[a[i]]) max = found[a[i]];
        }

        for(int i = 0; i < n; i++){
            if(found[a[i]]==max && !printed[a[i]]){
                printf("%d ",a[i]);
                printed[a[i]] = 1;
            }
        }
        printf("\n");

    }
}