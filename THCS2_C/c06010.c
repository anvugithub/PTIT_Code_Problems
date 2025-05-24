#include <stdio.h>
#include <string.h>

int isEven(int n){
    return (n == '2' || n == '4' || n == '6' || n == '8' || n == '0'); 
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
    char n[501]; scanf("%s",n);
    int laSoDep = 1;
    int len = strlen(n);

    for(int i = 0; i < len/2; i++){
        char digit = n[i];
        if(digit != n[len - 1 - i]){
            laSoDep = 0;
            break;
        }
        if(!isEven(digit)){
            laSoDep = 0;
            break;
        }
    }

    if(laSoDep){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    }
}