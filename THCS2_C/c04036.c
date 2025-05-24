#include <stdio.h>

int main(){
    int t,menhgia[]={1000,500,200,100,50,20,10,5,2,1};
    scanf("%d",&t);

    while(t--){
        long long sotien; int soto = 0;
        scanf("%lld",&sotien);

        for(int i = 0; i < 10; i++){
            if(sotien>=menhgia[i]){
                soto += sotien/menhgia[i];
                sotien %= menhgia[i];
            //    printf("mg %d tien conlai%d to hien tai%d\n",menhgia[i],sotien,soto);
            }
            if(sotien==0){
                break;
            }
        }

        printf("%d\n",soto);
    }

}