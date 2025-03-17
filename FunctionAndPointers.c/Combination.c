#include<stdio.h>
int factorial(int x){          // YAHAN PAR HMNE EK NAYA FUNCTION  BANAYA HAI
    int fact = 1;
    for(int i=2; i<=x; i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n, r;
    printf(" enter value of n=");
    scanf(" %d", &n);
    printf(" enter value of r=");
    scanf("%d", &r);
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));         //ncr--> this is use for selection
    printf("your ncr would be=%d", ncr);
    return 0;
}
