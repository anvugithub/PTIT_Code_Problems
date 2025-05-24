#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n],res[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    int resCount = 0;

    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(a[i] == a[j]) ++count;
        }
        if(count == 1){
            res[resCount] = a[i];
            ++resCount;
        }
    }

    printf("%d\n",resCount);
    for(int i = 0; i < resCount; i++){
        printf("%d ",res[i]);
    }
}