#include<stdio.h>
int main()
{
    float l, b, perimeter, area;
    printf(" enter the value of l : \n");
    scanf("%f", &l);
    printf(" enter the value of b : \n");              // \n--> this is used to change the paragraph or write in new line 
    scanf("%f", &b);
    perimeter = 2*(l+b);
    area = l * b;
    printf(" \nthe perimeter of rectangle :%f", perimeter);
    printf(" \nthe area of rectangle : %f", area);
    return 0;
}








    
