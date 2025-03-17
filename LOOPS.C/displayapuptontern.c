#include<stdio.h>
int main()
{
    int n;
    printf( " enter your number= ");
    scanf("%d", &n);
    for( int i=4 ; i<= 2 * n -1 ; i=i+3){   // N th term = (2 * n)-1
        printf("%d\n", i);                  // \n is use to print in  next line 
    }
    return 0;

}