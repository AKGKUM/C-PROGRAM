// #include<stdio.h>
// int main()
// {
//     int n;
//     printf(" enter your number = ");
//     scanf("%d", &n);
//     // 1 2 4 8 16 32  ... upto n number of term 
//     //we are going to use extra variables 
//     int a=1;
//     for( int i=1 ; i<=n ; i++ ){
//         printf("%d ", a);
//         a = a*2;
//     }
//     return 0;
//}

//DISPLAY THIS GP 3 12 48,... UPTO 'N' TERM

#include<stdio.h>
int main()
{
    int n;
    printf(" enter your number = ");
    scanf("%d", &n);
    // 3 12 48,   ... upto n number of term 
    //we are going to use extra variables 
    int a=3;
    for( int i=1 ; i<=n ; i++ ){
        printf("%d ", a);
        a = a*4;
    }
    return 0;
}