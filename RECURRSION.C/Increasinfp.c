#include<stdio.h>
void increasing(int n){
    if(n==0) return;
    increasing(n-1);
    printf("%d\n", n);
    return;
}
int main(){
    int n;
    printf(" enter your number=");
    scanf("%d", &n);
    increasing(n);
    return 0;
}