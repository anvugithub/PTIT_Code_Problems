#include <stdio.h>

int main(){
    int n; scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    for(int i = 0; i < n-1; i++){
        int max_pos = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] > a[max_pos]){
                max_pos = j;
            }
        }

        int tmp = a[i];
        a[i] = a[max_pos];
        a[max_pos] = tmp;
        // [!] Tất cả phần tử đứng trước i đều đã được sắp xếp.
    }

    for(int i = 0; i < n; i++){
        if(i>0) printf(" ");
        printf("%d",a[i]);
    }    

}