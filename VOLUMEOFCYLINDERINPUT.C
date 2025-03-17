#include<stdio.h>
int main()
{
     float radius, height, volume, pi, area;
     printf("enter the value of radius :\n ");
     scanf("%f", &radius);
     printf("enter the value of height :\n ");
     scanf("%f",& height);
     pi = 3.1415; 
     volume = pi * radius * radius * height;
     area = 2 * pi * radius * height;
     printf("the volume is : %f ", volume);
     printf("\nthe area is : %f",area );
     return 0;
  



}
    





