#include<stdio.h>
int main()
{   
    int n;
    printf(" enter a number = ");
    scanf("%d", &n);
     int a=0;
     for( int i=2; i<=n-1 ; i++){
        if( n%i==0){
            a=a+1;
            break;
        }
     }
        if( n==1)    printf( " n and n both of them");
        else if( a==0)    printf(" prime ");
        else    printf( " composite");

     
              return 0;
    }