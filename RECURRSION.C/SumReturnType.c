#include<stdio.h>
int sum(int a){
    if(a==0) return 0;
    int recAns=a+sum(a-1);
    return recAns;
}

int main(){
    int n;
    printf(" enetr your value of n=");
    scanf("%d",&n);
    int total= sum(n);    // this for calling and passing ant integer value to the sum function
    printf("%d", total);
    return 0;
}