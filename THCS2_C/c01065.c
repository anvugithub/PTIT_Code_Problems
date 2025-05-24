#include <stdio.h>
#include <string.h>

int isPrimeDigit(int n){
    return (n == '2' || n == '5' || n == '7' || n == '3');
}


int main(){
    char n[11];
    scanf("%s",n);

    int count[11]={0};
    int printed[11]={0};

    for(int i = 0; i < strlen(n); i++){
        char digit = n[i];
        if(isPrimeDigit(digit) && !count[digit - '0']){
            for(int j = 0; j < strlen(n); j++){
                if(n[j]==digit){
                    count[digit - '0']++;
                }
            }
        }
        if(count[digit - '0']!=0 && !printed[digit - '0']){ 
        printf("%c %d\n",digit,count[digit - '0']);
        printed[digit - '0'] = 1;
        }
    }
}