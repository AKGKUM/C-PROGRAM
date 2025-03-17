#include<stdio.h>
int main()
{
    int n;
    printf(" enter your number = ");
    scanf(" %d", &n);
    int lastDigit=0;
    int sum=0;
    while( n>0){
        lastDigit = n%10;
        if( lastDigit%2!=0)
        sum= sum+lastDigit;
        n=n/10;
    }
    printf( " the sum of all odd number = %d", sum);
    return 0;
}