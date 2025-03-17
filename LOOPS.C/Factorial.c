#include<stdio.h>          // print the factorial of a given number    IMPORTAN QUESTION HAI YE 
int main(){
    int n;
    printf(" enter you n=");
    scanf("%d" , &n);
    int factorial = 1;
    for(int i=1; i<=n; i++){
        factorial = factorial * i ;
    }
    printf( " the factorial of a given numer is =%d", factorial);
    return 0;
}