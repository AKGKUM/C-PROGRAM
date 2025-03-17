#include<stdio.h>
int main()
{
    int a, b; // a>b 
    printf(" dividend : ");
    scanf("%d",&a );
    printf(" divisior : ");
    scanf("%d", &b);
    int r, q;
    q = a/b;
    r = a - b*q;  // dividend = divisor * quotient * remainder
    printf(" the remainder when %d is divided by %d is : %d", a,b,r);
    return 0;
}