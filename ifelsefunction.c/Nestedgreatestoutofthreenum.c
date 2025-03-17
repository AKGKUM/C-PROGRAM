#include<stdio.h>
int main()
{
    int a, b, c;
    printf(" enter first number = ");
    scanf("%d", &a);
    printf(" enter second number =");
    scanf("%d", &b);
    printf(" enter third number = ");
    scanf(" %d", &c );
    if( a>b)
    {
         if( a>c ) 
         {
            printf( " A is greatest among of them = %d", a);

         }
         else
         {
           printf(" C is greatest = %d", c);
         }
    }

    else
    {
      if( b> a){
        if( b>c ){
            printf(" b is greatest = %d", b);
        }
        else{
            printf(" c is greatest = %d", c);
        }
      }
    }
    


    return 0;
}