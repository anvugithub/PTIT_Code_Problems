#include <stdio.h>
#include <math.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int xA,yA,xC,yC;
        scanf("%d %d %d %d",&xA,&yA,&xC,&yC);
        // A(xA;yA) chéo C(xC;yC); xA<xC; yA<yC
        /*
        
        A(xA,yA); B(xC,yA); C(xC,yC); D(xA,yC)

        là hình vuông khi chiều dài = chiều dọc
        <=> (|xC-xA| <=> |yA-yC|)
        
        */

       if(abs(xC-xA)==abs(yA-yC)){
        printf("YES\n");
       }
       else{
        printf("NO\n");
       }

    }

}