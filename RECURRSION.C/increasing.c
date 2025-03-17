#include<stdio.h>
void increasing( int x ,int n){
    if(x>n) return;  // isme n hamesha 5 hi rahega kewal x ko print karenge hm
    printf("%d\n", x);
    increasing(x+1, n);
    return;
}
int main(){
    int n;
    printf(" enter your number=");
    scanf("%d", &n);
    increasing(1,n);     // yahan pe hm  increasing function ko call lagaya hai with passing two value
    return 0;
}