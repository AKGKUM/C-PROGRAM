#include<stdio.h>
int main()
{
    float r;
    printf(" ENTER THE VALUE OF RADIUS = ");
    scanf(" %f", &r);
    float pi = 3.1415;
    float v = 4 * pi * r * r * r /3;
    printf("the volume is: %f", v); 
    return 0;
}