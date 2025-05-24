#include <stdio.h>

/*
int isReversed(long long n){
    long long original = n, rev = 0;
    while (n>0){
        rev=rev*10+(n%10);
        n/=10;
    }
    return original==rev; // 1 if equal, 0 otherwise
}
*/

int main(){
    long long a,b,a_r = 0,b_r = 0,aThuanNghich = 0,bThuanNghich = 0;
    scanf("%lld %lld",&a,&b);

    long long original_a = a, original_b = b;
    
    while(a>0){
        a_r=a_r*10+(a%10);
        a/=10;
    }

    if(a_r == original_a){
        aThuanNghich = 1;
    }

    while(b>0){
        b_r=b_r*10+(b%10);
        b/=10;
    }

    if(b_r == original_b){
        bThuanNghich = 1;
    }


  //  printf("%lld %lld",a_r,b_r,aThuanNghich,bThuanNghich);
    //printf("%d %d",isReversed(a),isReversed(b));

    if(aThuanNghich!=bThuanNghich){
        printf("YES");
    }
    else{
        printf("NO");
    }

}