#include <stdio.h>

int main(){
    int remaining_days;
    scanf("%d",&remaining_days);
    int years=remaining_days/365;
    remaining_days -= years*365;
    int weeks = remaining_days/7;
    remaining_days -= weeks * 7;
    printf("%d %d %d",years,weeks,remaining_days);

}