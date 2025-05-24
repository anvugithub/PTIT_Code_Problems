#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int pool[n],counted[n],result[n],resultsCount = 0;

    for (int i = 0; i < n; i++){
        scanf("%d",&pool[i]);
        counted[i] = 0;
    }

    for (int i = 0; i < n; i++){
        if(counted[i]) continue;
        
        int freq = 1;
        for (int j = i + 1; j < n; j++){
            if(pool[i]==pool[j]){
                freq++;
                counted[j] = 1;
            }
        }
        if (freq>1){
            result[resultsCount++] = pool[i];
        }
    }
    printf("%d\n",resultsCount);
    for (int i = 0; i < resultsCount; i++){
        printf("%d ",result[i]);
    }
}