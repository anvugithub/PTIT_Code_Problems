#include <stdio.h>

int isPalindrome(int n){
    int r = 0, o = n;
    while(n!=0){
        r = r*10 + n%10;
        n/=10;
    }
    return r == o;
}

int hasSix(int n){
    while(n!=0){
        if(n % 10 == 6) return 1;
        n/=10;
    }
    return 0;
}

int sumEndsWithEight(int n){
    int sum = 0;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    return(sum % 10 == 8);
}

int main(){
    int a,b; scanf("%d %d",&a,&b);

    if(a>b){
        int tmp = a; a = b; b = tmp;
    }

    for(int i = a; i <= b; i++){
        if(isPalindrome(i) && hasSix(i) && sumEndsWithEight(i)) printf("%d ",i);
    }



}