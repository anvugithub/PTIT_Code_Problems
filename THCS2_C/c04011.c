#include <stdio.h>

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n); int a[n];
        for(int i = 0; i < n; i++){
            scanf("%d",&a[i]);
        }

        int count = 0;

        for(int i = 0; i < n; i++){
            int check = 1;
            // Kiem tra tat ca phan tu truoc i
            for(int j = 0; j < i; j++){
                if(a[j] > a[i]){
                    check = 0;
                    break;
                }
            }
            if(check) ++count;
        }
    printf("%d\n",count);

}
}