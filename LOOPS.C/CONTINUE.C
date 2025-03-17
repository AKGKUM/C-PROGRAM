#include<stdio.h>
int main()
{
    for( int i=1 ; i<=100 ; i++){
        if( i%2==0 ){
            continue;     // isme continue ka matlab hota hai ki is round ko skip kar do 
        }
        printf("%d ", i);
    }
}