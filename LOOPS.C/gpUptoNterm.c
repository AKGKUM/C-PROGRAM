#include<stdio.h>
int main()
{
    float  n;
    printf(" enter a value = "); 
    scanf("%d", &n);
    float a=100;
    for( float i=1 ; a<=n ; i++){
        printf("%f", a );
        a = a/2;
    }
    return 0;
}