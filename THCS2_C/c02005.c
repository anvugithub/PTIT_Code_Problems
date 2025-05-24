#include <stdio.h>
/*

r = 3; c = 5:
*****
~*****
~~*****

Chạy từ dòng i = 0 đến i = 2;
dòng thứ i có c dấu *, i dấu ~

*/

int main(){
    int r,c; scanf("%d %d",&r,&c);
    for(int i = 0; i < r; i++){
        // In i dấu ~
        for(int a = 0; a < i; a++){
            printf("~");
        }
        // In c dấu *
        for(int b = 0; b < c; b++){
            printf("*");
        }
        printf("\n");
    }
}