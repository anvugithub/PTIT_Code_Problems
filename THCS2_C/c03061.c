#include <stdio.h>
#include <string.h>
#include <ctype.h>


int ThuanNghich(char n[]){
/*
  3-6-7-8-8-7-6-6 (l = 8)   
i:0-1-2-3-4-5-6-7

ví dụ so giá trị ứng với i = 1 (6) với i = l - 1 - i = 8 - 1 - 1 = 6 (6)
so đến khi tới chỉ số giữa ((l - 2)/2) = ((8-2)/2) = 3

  1-2-3-4-3-2-2; len = 7 
i:0-1-2-3-4-5-6

So đến khi ((7-2)/2) = 2.5 (làm tròn xuống 2)


*/
    for(int i = 1; i <= (strlen(n) - 2)/2; i++){
        if(n[i] != n[strlen(n) - 1 - i]) return 0;
    }
    return 1;
}

int DauGapDoiCuoi(char n[]){
    int dau = n[0] - '0';
    int cuoi = n[strlen(n) - 1] - '0';
    if(dau == 2 * cuoi || cuoi == 2 * dau) return 1;

    return 0;
}


int main(){
    int t; scanf("%d",&t);
    while(t--){
        char n[19]; scanf("%s",n);
        if(ThuanNghich(n) && DauGapDoiCuoi(n)){
            printf("YES\n");
        }
        else printf("NO\n");
    }
}