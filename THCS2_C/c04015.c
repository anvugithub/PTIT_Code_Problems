#include <stdio.h>


int main(){
    int t; scanf("%d",&t);
    int current_case = 1;
    while(t--){
        int count[1000001]={0};
        int n; scanf("%d",&n);
        int a[n];
        for(int i = 0; i < n; i++){
            scanf("%d",&a[i]);
        }
        printf("Test %d:\n",current_case);
        current_case++;
        
        for(int i = 0; i < n; i++){
            count[a[i]]++;
        }

        for(int i = 0; i < n; i++){
            if(count[a[i]]!=0){
                printf("%d xuat hien %d lan\n",a[i],count[a[i]]);
                count[a[i]]=0;
            }
        }
    }
}