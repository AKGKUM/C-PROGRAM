#include<stdio.h>                                      // Q ... WRITE A PROGRAM TO FIND THE VALUE OF ONE NUMBER RAISED TO THE POWER OF ANOTHER NUMBER 
int main()                                                 // MATLAB 2^5  KO KAISE PRINT KAROGE, YA KOI SA V EXPONENTIAL KO KAISE PRINT KAROVGE 
{
    int a , b ;
    printf(" enter base=");
    scanf("%d", &a);
    printf(" enter power=");
    scanf("%d", &b);
    int power=1;
    for(int i=1; i<=b; i++)
{
        power = power * a;
}
    printf( " the exponential value is = %d", power);
    return 0;
}