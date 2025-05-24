#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);

    double delta = b*b - 4*a*c;
    double squared_delta = sqrt(delta);

    if(fabs(a)<=1000 && fabs(b)<=1000 && fabs(c)<=1000)
    {
        if(delta>0){
            printf("%.2lf %.2lf",(-b + squared_delta)/(2*a),(-b - squared_delta)/(2*a));
        }
        else if(delta==0){
            printf("%.2lf",(-b)/(2*a));
        }
        else{
            printf("NO");
        }
    }


}