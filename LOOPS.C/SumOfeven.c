#include<stdio.h>
int main()
{
    int n;
    printf( " enter your number =");
    scanf(" %d", &n);
    int sum = 0;
    int lastDigit = 0;
    while( n!=0){
    lastDigit = n%10;
    if( n%2==0){
        sum = sum +  lastDigit;
    }
    n = n/10;
    }
    printf( " the sum of even numbers = %d", sum);
    return 0;
}