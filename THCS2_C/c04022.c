#include <stdio.h>

int main(){
    int n; scanf("%d",&n); int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    int largest = a[0], secondlargest = -1;

    for(int i = 1; i < n; i++){
        if(a[i] > largest){
            secondlargest = largest;
            largest = a[i];
        }
        // duyệt các trường hợp nhỏ hơn largest
        // nhưng lớn hơn secondlargest
        // để tìm secondlargest đúng.
        else if(a[i] > secondlargest && a[i]!=largest){
            secondlargest = a[i];
        }
    }

    printf("%d %d",largest,secondlargest);

}