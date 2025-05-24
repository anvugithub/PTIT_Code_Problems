#include <stdio.h>
#include <math.h>

int main(){
    long long m,n;
    scanf("%lld %lld",&m,&n);


    // So chinh phuong bang binh phuong mot so nguyen.


    // Kiem tra so n la so chinh phuong khong:
    // Lay nguyen sqrt(n), dat la x.
    // Lay x * x, neu ra n la chinh phuong.

    int m_r = sqrt(m), n_r = sqrt(n);
    // Xu ly truong hop m_r bi lam tron xuong,
    // gay ra thua truong hop.
    if(m_r*m_r!=m){
        m_r++;
    }

    int resultsCount = n_r - m_r + 1;

    printf("%d\n",resultsCount);

    for(int i = m_r; i <= n_r; i++){
        printf("%lld\n",i*i);
    }

}