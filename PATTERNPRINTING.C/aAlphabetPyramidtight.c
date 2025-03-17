#include<stdio.h>
int main()
{
    int n;
    printf(" enter no. of rows/lines=");
    scanf("%d", &n);
    int nst=n;
    int nsp=1;
    // ABCDEFG ye wali line hmne alag se print kari hai 

    // ABC EFG      isliye n=3 hi consider karke prinbt kara hai , but over all n=4 ke liye hi print huwa hai 
    // AB   FG     jab bhi aisa question aaye to hm n ki value ek kam karke hi print karenge 
    // A     G
    int b=65;
    for(int m=1; m<=2*n+1; m++){
         char ch=(char)b;
        printf("%c", ch);
        b++;
    }
    printf("\n");
    for(int i=1; i<=n; i++){
        int a=1;
        for(int j=1; j<=nst; j++){
            char ch=(char)(a+64);
            printf("%c", ch);
            a++;
        }
        for(int k=1; k<=nsp; k++){
            printf(" ");
            a++;
        }
        for(int r=1; r<=nst; r++){
            char ch=(char)(a+64);
            printf("%c", ch);
            a++;
        }
        nst--;
        nsp=nsp+2;
        printf("\n");
    }

    return 0;
}