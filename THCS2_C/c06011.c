#include <stdio.h>
#include <string.h>

int laSoNguyenTo(int n){
    return (n == '2' || n == '3' || n == '5' || n == '7');
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
    char n[501]; scanf("%s",n);
    int laSoDep = 1;
    int len = strlen(n);

    for(int i = 0; i < len/2; i++){
        char digit = n[i];
        char r_digit = n[len - 1 - i];
        if(digit != r_digit){
            laSoDep = 0;
            break;
        }}

        for(int i = 0; i < len; i++){
            if(!laSoNguyenTo(n[i])){
                laSoDep = 0;
                break;
            }
        }


    if(laSoDep){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }}
}