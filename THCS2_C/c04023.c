#include <stdio.h>

int main(){
    int n; scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    for(int i = 0; i < n-1; i++){
        // Biến để lưu chỉ số của phần tử nhỏ nhất
        int min_pos = i;
        // Duyệt tất cả các phần tử sau phần tử hiện tại,
        // cập nhật chỉ số phần tử nhỏ nhất
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[min_pos]){
                min_pos = j;
            }
        }

        int tmp = a[i];
        a[i] = a[min_pos];
        a[min_pos] = tmp;
        // [!] Tất cả phần tử đứng trước i đều đã được sắp xếp.
    }

    for(int i = 0; i < n; i++){
        if(i>0) printf(" ");
        printf("%d",a[i]);
    }    

}