#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int arr[n], s = 0;

    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
        s = s + arr[i];
    }

    printf("%.3f\n",(float)s/n);
}