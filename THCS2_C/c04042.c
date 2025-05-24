#include <stdio.h>
#include <string.h>

int count[1000001] = {0};

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n); int a[n];
        int found = 0;
        for(int i = 0; i < n; i++){
            scanf("%d",&a[i]);
        }

        for(int i = 0; i < n; i++){
            if(count[a[i]]==0){
                count[a[i]]++;
            }
            if(count[a[i]]>1){
                printf("%d\n",a[i]);
                found = 1;
                break;
            }
        }

        if(!found) printf("NO\n");
        memset(count, 0, sizeof(count));

    }
}