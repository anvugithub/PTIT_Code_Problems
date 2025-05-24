#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n], odd[n], even[n];
    int evenCount = 0, oddCount = 0;

    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < n; i++){
        if(a[i]%2 == 0){
            even[evenCount] = a[i];
            evenCount++;
        }
        else{
            odd[oddCount] = a[i]; // odd[oddCount++] is also possible (without the next line)
            oddCount++;
        }
    }

    for (int i = 0; i < evenCount; i++){
        printf("%d ",even[i]);
    }
    printf("\n");

    for (int i = 0; i < oddCount; i++){
        printf("%d ",odd[i]);
    }

}