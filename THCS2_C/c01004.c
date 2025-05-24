#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        double n; // ko dùng int vì phép chia 2 số nguyên luôn cho kết quả là số nguyên (trong C)
        scanf("%lf",&n);
        printf("%.15lf\n",1/n);


    }
}