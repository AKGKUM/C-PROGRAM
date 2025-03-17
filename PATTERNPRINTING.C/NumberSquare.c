// print the given number 
// 1 2 3 4
// 1 2 3 4     -->  number square 
// 1 2 3 4
// 1 2 3 4

#include<stdio.h>
int main()
{
    int n,m;
    printf(" enter no. of rows =");
    scanf(" %d", &n);
    printf(" enter no. of column");
    scanf(" %d", &m);
    for( int i=1; i<=n; i++){       // NO. OF LINES/ROWS --> i VARIABLE USE KARENGE 
        for(int j=1; j<=m; j++){    // NO. OF COLUMNS -->   j VARIABLE KA USE KARENGE 
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}