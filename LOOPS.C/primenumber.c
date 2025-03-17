#include<stdio.h>
int main()
{
    int n;
    printf(" enter your number = ");
    scanf("%d", &n);
    int a=0;
    for( int i=2; i<=n-1 ; i++){
        if( n%i==0){    // is condition ka matlab hai ki i is factor of n;
         a=1;
         break;
        }
    }
    if(n==1)         printf( " NEITHER PRIME NOR COMPOSITE ");
    else if(n==0)    printf( " this is a whole number ");
    else if( a==0)   printf(" yes the given number is prime ");
    else if( a==1)   printf( " the given number is composite ");
    
    return 0; 
}