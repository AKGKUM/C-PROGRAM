#include<stdio.h>
int main()
{
    int n;
    printf(" enter your number = ");
    scanf( " %d ", &n);
    int count=0;
    while( n!=0){
        n = n/10;
        count++;

    }
     printf(" the number of digits in your number =%d", count);
    return 0;
}