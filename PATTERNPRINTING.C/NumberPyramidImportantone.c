#include<stdio.h>
int main(){
    int n;
    printf(" enter number of lines=");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){         // this loop is for how many times you have to run this program or how many rows you need or how many lines you need

        for(int j=1; j<=n-i; j++){    // this is for printing space
            printf(" ");
        }
        for(int k=1; k<=i; k++){         // this is for printing number trianle
            printf("%d", k);
        }
        int a=i-1;
        for(int q=1; q<=i-1; q++){        // this is for printing a 
            printf("%d", a);
            a--;                      // this is for decreament by 1 in each iteration 
        }

        printf("\n");
    }
    return 0;
}