#include <stdio.h>

int main(){
    int t,current_case = 1; scanf("%d",&t);
    while(t--){
        int n,m; scanf("%d %d",&n,&m);
        int p; scanf("%d",&p);
        int a[n], b[m], c[n+m];

        for(int i = 0; i < n; i++){
            scanf("%d",&a[i]);
        }
        for(int i = 0; i < m; i++){
            scanf("%d",&b[i]);
        }

        int index = 0;

        // Truoc vi tri chen:
        for(int i = 0; i < p; i++){
            c[index] = a[i]; index++;
        }

        // In mang chen vao:
        for(int i = 0; i < m; i++){
            c[index] = b[i];
            index++;
        }

        // Sau vi tri chen:
        for(int i = p; i < n; i++){
            c[index] = a[i];
            ++index;
        }


        printf("Test %d:\n",current_case);
        current_case++;

        
        for(int i = 0; i < index; i++){
            printf("%d ",c[i]);
        }
        printf("\n");
    }
}