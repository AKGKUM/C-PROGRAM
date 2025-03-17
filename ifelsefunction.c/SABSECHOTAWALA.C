#include<stdio.h>
int main()
{
    int Ram, Shyam,Ajay;
    printf(" Age of Ram is =");
    scanf("%d", &Ram);
    printf(" Age of Shyam is =");
    scanf("%d", &Shyam);
    printf(" Age of Ajay is = ");
    scanf("%d", &Ajay);
    if(Ram<Shyam && Ram<Ajay){
        printf("youngest one is  Ram = %d", Ram);
    }
    if(Shyam<Ram && Shyam<Ajay){
        printf("youngest one is Shyam = %d", Shyam);
    }
    if(Ajay<Shyam && Ajay<Ram){
        printf(" youngest one is Ajay = %d", Ajay);
    }
    return 0;
}