#include<stdio.h>
int main()
{
    int n;
    printf(" enter leap sal =");  // suppose input 2004
    scanf("%d", &n);
    if( n%4==0) {

        printf(" leap sal");
    }
                                                               // agr ahi inpit 2005 hota to output non leap sal hota 
                                                               
    else{
        printf(" non leap sal");
    }



    return 0;
}

// output would be leap sal