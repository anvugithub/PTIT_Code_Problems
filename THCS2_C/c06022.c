#include <stdio.h>
#include <string.h>
#include <ctype.h>

int compare(char a[],char b[]){
    int n1 = strlen(a);
    int n2 = strlen(b);
    if(n1 != n2) return 0;
    for(int i = 0; i < n1; i++){
        if(tolower(a[i])!=tolower(b[i])) return 0;
    }
    return 1;
}

int main(){
    int t; scanf("%d",&t); getchar();
    for(int i = 1; i <= t; i++){
        char a[1000], b[1000];
        fgets(a,sizeof(a),stdin);
        a[strcspn(a,"\n")] = '\0'; 
        fgets(b,sizeof(b),stdin);
        b[strcspn(b,"\n")] = '\0';
    char *token = strtok(a," ");
    printf("Test %d: ",i);
    while(token != NULL){
        if(compare(token,b)==0){
            printf("%s ",token);
        }
        token = strtok(NULL," ");
    }
    printf("\n");
    }
}