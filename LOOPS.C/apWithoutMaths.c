#include<stdio.h>
int main()
{
    int n;
    printf(" enter your number = ");
    scanf("%d", &n);
    // 4 7 10 13 16 ... upto n number of term 
    //we are going to use extra variables 
    int a=4;
    for( int i=1 ; i<=n ; i++ ){
        printf("%d ", a);
        a = a+3;
    }
    return 0;
}