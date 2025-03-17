#include<stdio.h>
int main()
{
    float x;
    printf(" enter the value of x : ");
    scanf("%f", &x);
    int y;
    y = x;
    float z = x - y;
    printf(" the fractional value is : %f", z);
    return 0;
}