#include<stdio.h>
int main()
{
    int n;
    printf(" enter a number :");
    scanf("%d", &n);
    if( n%5==0) {
        printf(" divisible b 5");
    }
    
    else{
        printf(" not divisible b 5");
    }
    return 0;
}