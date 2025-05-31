#include <stdio.h>
#include <string.h>
#include <stdlib.h>


long long gcd(long long a, long long b){
    while(b!=0){
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}

long long lcm(long long a, long long b){
    // LCM(a,b) = (a*b)/GCD(a,b);
    return (a*b)/gcd(a,b);
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        char n[19]; scanf("%s",n);

        if(strlen(n)%2 == 0){
            int nua = strlen(n) / 2;
            char nuaDau[nua + 1], nuaCuoi[nua + 1];

/*
strncpy(destination, source, n): copy tối đa n ký tự
strncpy(nuaDau, n, nua);: copy nua ký tự đầu của chuỗi n sang nuaDau (mảng đích).
nuaDau[nua] = '\0';: đặt ký tự null để kết thúc chuỗi hợp lệ. Vì strncpy không tự đặt '\0' nếu source dài >= n.

strcpy(destination, source):
strcpy(nuaCuoi, n + nua);: copy toàn bộ phần chuỗi bắt đầu từ vị trí nua (nửa cuối chuỗi) sang nuaCuoi.

*/

            strncpy(nuaDau,n,nua); nuaDau[nua] = '\0';
            strcpy(nuaCuoi,n + nua);

            long long soNuaDau = atoll(nuaDau), soNuaCuoi = atoll(nuaCuoi);

            printf("%lld\n",lcm(soNuaDau,soNuaCuoi));

        }
        else printf("INVALID\n");

    }
}