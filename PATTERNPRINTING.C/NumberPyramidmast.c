#include<stdio.h>
int main()
{
    int n;
    printf(" enter no. of rows/lines=");
    scanf("%d", &n);
    int nst=n;
    int nsp=1;
    // 1234567 ye wali line hmne alag se print kari hai 

    // 123 567      isliye n=3 hi consider karke prinbt kara hai , but over all n=4 ke liye hi print huwa hai 
    // 12   67      jab bhi aisa question aaye to hm n ki value ek kam karke hi print karenge 
    // 1     7 
    for(int m=1; m<=2*n+1; m++){
        printf("%d", m);
    }
    printf("\n");
    for(int i=1; i<=n; i++){
        int a=1;
        for(int j=1; j<=nst; j++){
            printf("%d", a);
            a++;
        }
        for(int k=1; k<=nsp; k++){
            printf(" ");
            a++;
        }
        for(int r=1; r<=nst; r++){
            printf("%d", a);
            a++;
        }
        nst--;
        nsp=nsp+2;
        printf("\n");
    }

    return 0;
}