#include <stdio.h>

int main(){
    int n,m; scanf("%d %d",&n,&m);
    int a[m], b[m];

    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0; i < m; i++){
        scanf("%d",&b[i]);
    }

    // p: vi tri chen
    int p; scanf("%d",&p);

    // Truoc vi tri chen:
    for(int i = 0; i < p; i++){
        printf("%d ",a[i]);
    }

    // In mang chen vao:
    for(int i = 0; i < m; i++){
        printf("%d ",b[i]);
    }

    // Sau vi tri chen:
    for(int i = p; i < n; i++){
        printf("%d ",a[i]);
    }

}