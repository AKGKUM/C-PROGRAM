#include<stdio.h>
int main()
{
    int l, b, A, P;
    printf(" enter the value of length :");
    scanf("%d", &l);
    printf(" enter the value of breadth :");
    scanf("%d", &b);
    A = l * b;         // area of rectangle
    P = 2 * ( l +b );  // perimeter of rectangle
    if( A>P){
        printf(" Area would be greater than perimeter");
    }
    if(A<P){
        printf(" Area would be not then perimeter");
    }
    if(A==P){
        printf(" Area would be equal to peimeter");
    }
    return 0;
}