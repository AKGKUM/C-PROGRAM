#include<stdio.h>
int main()
{
    double x1, x2, x3, y1, y2, y3;
    printf("enter your coordinates =");
    scanf("%d %d %d %d %d %d", &x1, &x2, &x3, &y1, &y2, &y3);
    double m1, m2;
    m1 = (y2-y1)/(x2-x1);
    m2 = (y3-y2)/(x3-x2);
    if( m1==m2){
        printf(" it is a straight line");
    }
    else{
        printf( " it is not a straight line");
    }

 

 return 0;
}