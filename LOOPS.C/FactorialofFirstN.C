#include<stdio.h>
int main()
{                                         // Q-->  PRINT THE FACTORIAL OF FIRST N . 
    int n, factorial;
    printf(" enter your n =");
    scanf( " %d", &n);
    factorial = 1;
    for( int i = 1; i<=n ; i++)
    {
        factorial = factorial * i ;
        printf( " the factorial of %d = %d\n", i, factorial);
    }
    return 0;

}