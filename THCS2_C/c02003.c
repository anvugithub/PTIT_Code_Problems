#include <stdio.h>

int main(){
    int n; scanf("%d",&n);
    for(int row = 0; row < n; row++){
        for(int column = 0; column < n; column++){
            if(row == 0 || column == 0 || row == (n-1) || column == (n-1)){
                printf("*");
            }
            else{
                printf(".");
            }
        }
        printf("\n");
    }
}