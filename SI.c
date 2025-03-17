#include<stdio.h>
int main()
{
     float principal, rate, time;
     printf(" Enter principal :");
     scanf("%f", &principal);
     printf(" Enter rate :");
     scanf("%f", &rate);
     printf(" Enter time :"); 
     scanf("%f", &time); 
     float si = (principal * rate * time)/100;
     printf(" your simple intrest is = %f", si);
     return 0;
}