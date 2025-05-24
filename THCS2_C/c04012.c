#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    int foundatleastone = 0;

    for(int i = 0; i < n; i++){
        // Kiểm tra a[i] có phải là lần đầu tiên gặp
        int isFirst = 1;
        for(int j = 0; j < i; j++){
            if(a[i]==a[j]){
                isFirst = 0;
                break;
            }}
        // Đếm số lần xuất hiện
        if(isFirst){
            int count = 1;
            for(int j = i + 1; j < n; j++){
                if(a[i]==a[j]){
                    count++;
                }
            }
            if(count > 1){
                printf("%d ",a[i]);
                foundatleastone = 1;
            }
            }
    }
    if(!foundatleastone){
        printf("0");
    }
}