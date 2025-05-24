#include <stdio.h>
#include <string.h>

int main(){
    int t; scanf("%d",&t); getchar();
    while(t--){
        char plate[15];
        fgets(plate,sizeof(plate),stdin);
    // 2(1)9(2)-(3)T(4)1(5) X(6)X(7)X(8).(9)X(10)X(11))

    int worthy = 0;

    if(plate[6] < plate[7] && plate[7] < plate[8] && plate[8] < plate[10] && plate[10] < plate[11]){
        worthy = 1;
    }

    if(plate[6] == plate[7] && plate[7] == plate[8] && plate[8] == plate[10] && plate[10] == plate[11]){
        worthy = 1;
    }

    if((plate[6] == plate[7] && plate[7] == plate[8]) && (plate[10] == plate[11])){
        worthy = 1;
    }

    int all_68 = 1;
    for(int i = 6; i < 12; i++){
        if(i!=9){
            if(plate[i] != '6' && plate[i] != '8'){
                all_68 = 0;
                break;
            }
        }
    }
    if(all_68) worthy = 1;

    if(worthy){
        printf("YES\n");
    }
    else printf("NO\n");


    }
}