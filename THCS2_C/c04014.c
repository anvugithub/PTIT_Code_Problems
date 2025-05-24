#include <stdio.h>

int count[1000001]={0}; // Mảng có các giá trị toàn là 0.

int main(){
    int n; scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    for(int i = 0; i < n; i++){
        count[a[i]]++;
    }

    for(int i = 0; i < n; i++){
        // Để một số không xuất hiện nhiều lần, sau khi
        // in ra gán bằng 0 trong khi dùng điều kiện kiểm tra
        // khác 0 mới được in ra.
        if(count[a[i]]!=0){
            printf("%d %d\n",a[i],count[a[i]]);
            count[a[i]]=0;
        }
    }

}