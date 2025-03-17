#include<stdio.h>
#include<math.h>
int main(){
    double n,m;
    printf(" enter your 1st number:");
    scanf("%lf", &n);
    printf(" enter your 2nd number:");
    scanf("%lf", &m);

    double power=pow( n,m);
    printf("%lf", power);
    return 0;
}