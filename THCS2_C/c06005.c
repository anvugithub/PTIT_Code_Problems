#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char c[1001];
    fgets(c,sizeof(c),stdin);
    c[strcspn(c,"\n")] = '\0';
    int len = strlen(c);


    for(int i = 0; i < len; i++){
        c[i] = tolower(c[i]);
    }

    char a[100][100];
    int n = 0; // số từ

    char *token = strtok(c, " ");
    while(token != NULL){
        strcpy(a[n],token); // Chép token vào hàng n của mảng hai chiều a
        ++n;
        token = strtok(NULL," ");
    }

    int mark[1001]={0};

    for(int i = 0; i < n; i++){
        if(mark[i]==0){
            int count = 1;
            for(int j = i + 1; j < n; j++){
                if(strcmp(a[i],a[j]) == 0){
                    count++;
                    mark[j] = 1;
                }
            }
            printf("%s %d\n",a[i],count);
        }
    }
}
