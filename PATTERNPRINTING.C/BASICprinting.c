#include<stdio.h>
int main()
{                                       // ISME NESTED LOOPS KA USE HUWA HAI
    int n,m;
    printf(" enter no. of rows=");       // NESTED LOOPS--> ISKA MATLAB LOOPS KE ANDER LOOPS KA ISTMAL KARNA HAI 
    scanf("%d", &n);
    printf(" enter no. of column=");
    scanf(" %d", &m);
    for(int i=1; i<=n; i++){          // OUTER LOOPS--> NO. OF LINES KE LIYE HAI = NO. OF ROWS BHI KAH SAKTE HAI
        for(int i=1; i<=m; i++){       // INNER LOOPS--> NO. OF STAR IN EACH LINE= NO. OF COLUMS BHI KAH SAKTE HAI KOI DIKKAT NA HAI 
            printf("*");
        }
        printf("\n");                 // \N --> IT IS USE FOR PRINT EACH ROW IN IN LINE THATS IT 
    }
    return 0;
}