#include<stdio.h>
void decreasingincreasing(int n){
    if(n==0) return;
    printf("%d\n", n);
    decreasingincreasing(n-1);
    printf("%d\n", n);
    return;
}
int main(){
    int n;
    printf(" enter your number=");
    scanf("%d", &n);
    decreasingincreasing(n);
    return 0;
}