#include<stdio.h>
int main()
{
    int n;
    printf(" enter number = ");
    scanf("%d", &n);
    if(n%3==0 && n%5==0){
        printf(" it is divisible by 3 and 5");
    }
    else{
        printf(" it is not divisible from 3 and 5");
    }
    return 0;
}