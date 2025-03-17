#include<stdio.h>
int main()
{
    int n;
    printf(" enter no. of lines =");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){   // this is for no. of rows that you needed
        for(int j=1; j<=n-i; j++){  // this is for printing spaces
            printf(" ");
        }
        for(int k=1; k<=2*i-1; k++){         // ye loop is liye hai ki har line me kitna star print karna hai, uske liye hai 
            printf("*");
        }
        printf("\n");
    }
    return 0;
}