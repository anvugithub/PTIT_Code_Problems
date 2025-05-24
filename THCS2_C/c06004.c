#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    int letters=0,numbers=0,otherchars=0;
    char s[1000];
    fgets(s, sizeof(s), stdin);
    for(int i = 0; i < strlen(s); i++){
        if(isalpha(s[i])){
            letters+=1;
        }
        else if(isdigit(s[i])){
            numbers+=1;
        }
        else{
            otherchars+=1;
        }
    }
    printf("%d %d %d",letters,numbers,otherchars-1);
    // phải bỏ đi 1 ký tự khác vì \n được thêm vào sau cùng khi dùng fgets
}