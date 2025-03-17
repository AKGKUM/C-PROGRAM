#include<stdio.h>
int fibo(int n){
    if(n==0 || n==1) return 1;
    int ans = fibo(n-1)+fibo(n-2);
    return ans;
}
int main(){
    int n;
    printf(" enter your number =");
    scanf(" %d", &n);
    fibo(n);
    printf(" %d\n", fibo(n));

    return 0;
}