#include<stdio.h>
int main()
{
    int a, b, c, d;
    printf(" enter the value of a =");
    scanf("%d", &a);
    printf(" enter the valu of b =");
    scanf("%d", &b);
    printf(" enter the value of c =");
    scanf("%d", &c);
    printf(" enter the value of d =");
    scanf("%d", &d);
    if(a>b && a>c && a>d)
    
    {
        printf("%d greatest of them ", a);

    }
    if(b>a && b>c && b>d)
    {
        printf("%d greatest of them  ", b);
    }
     if(c>a && c>b && c>d)
    {
        printf("%d greatest of them  ", c);

    }
    if(d>a && d>b && d>c)
    {
        printf("%d greatest of them  ", d);
    }


    return 0;
}