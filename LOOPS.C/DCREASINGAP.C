#include<stdio.h>
int main()
{
    // gp 100 97 94, ... upto all positive numbers 
    int a=100;
    for(int  i=1 ; a>0 ; i++){
        printf("%d ", a);
        a = a - 3;
    }
    return 0;
}