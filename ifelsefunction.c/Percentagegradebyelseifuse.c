#include<stdio.h>
int main()
{
    int n;
    printf(" enter percentage value = ");
    scanf("%d", &n);
    if( n > 81 )
    { 
        printf(" A grade ");
    }
    else if( n > 61 )
    {
        printf(" B grade ");
    }
    else if( n >= 40 )
    {
        printf(" C grade ");
    }
    else{
        printf( " fail ");
    }

    return 0;
}


