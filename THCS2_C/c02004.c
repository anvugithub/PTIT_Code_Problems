#include <stdio.h>
/*
n=4:
~~~****
~~****
~****
****
Chạy từ i = 0, dòng i in (n-i-1) dấu ~, n dấu *.
*/

int main(){
    int n; scanf("%d",&n);
    // duyệt từng dòng một:
    for(int i = 0; i < n; i++){
        // trong mỗi dòng, in n - i - 1 dấu ~
        for(int j = 0; j < n - i - 1; j++){
            printf("~");
        }
        // tiếp theo in n dấu *
        for(int j = 0; j < n; j++){
            if(j == 0 || j == (n-1) || i == 0 || i == (n-1)){
                printf("*");
            }
            else{
                printf(".");
            }
        }
        printf("\n");
    }
}