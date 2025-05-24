#include <stdio.h>

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        int a[n];
        for(int i = 0; i < n; i++){
            scanf("%d",&a[i]);
        }

        // Kiem tra doi xung
        int left = 0, right = n - 1, doixung = 1;
        while(left <= right){
            if(a[left]!=a[right]){
                doixung = 0;
                break;
            }
            left++;
            right--;
        }

        if(doixung){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

    }
}