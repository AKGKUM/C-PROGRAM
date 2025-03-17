#include<stdio.h>
int factorial(int a){
    if(a==1 || a==0) return 1;      // BASE CASE-- YE ISLIYE DETE H TAKI APNE FUNCTION KO PATA CHALE KI KAB RUKNA H
    int recAns=a*factorial(a-1);    // RECURANCE REJATION
    return recAns;
}
int main(){
    int n;
    printf(" enetr your value of n=");
    scanf("%d",&n);
    int fact= factorial(n);    // this for calling and passing ant integer value to the factorial function
    printf("%d", fact);
    return 0;
}