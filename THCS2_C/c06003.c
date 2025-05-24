#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d",&t); getchar(); // bỏ \n sau scanf
    while(t--){
        char s[1000];
        fgets(s,sizeof(s),stdin);
        int wordCount = 0, inWord = 0;
        for(int i = 0; i < strlen(s); i++){
            if(s[i]!=' ' && s[i] != '\n'){
                if(inWord==0){
                    wordCount++;
                    inWord = 1;
                }
            }
            else{
                inWord = 0;
            }
        }
        printf("%d\n",wordCount);
    }
}