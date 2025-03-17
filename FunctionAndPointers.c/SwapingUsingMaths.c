#include<stdio.h>
int main(){
    int a, b;
    printf(" enter your 1st number=");
    scanf("%d",&a);
    printf(" enetr your 2nd number=");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the value os a is=%d\n", a);
    printf(" the value of b is=%d",b);
    return 0;
}