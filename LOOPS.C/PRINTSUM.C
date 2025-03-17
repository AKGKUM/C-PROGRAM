#include<stdio.h>
int main()
{
    int n;
    printf(" enter your number = ");
    scanf(" %d", &n);
    int  r =0;
       int sum=0;
       int original= n;
    
    while( n>0){
        
        r = r*10;
        r = r+(n%10);
        n= n/10;
      
    }
      sum=r+original;
      printf(" the sum of reverse and original number = %d",sum);
      
    return  0;
}