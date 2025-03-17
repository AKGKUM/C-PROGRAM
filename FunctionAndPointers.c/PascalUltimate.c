#include<stdio.h>
int main(){
    int n;
    printf(" enter your value of n=");
    scanf("%d", &n);
    for(int i=0; i<=n; i++){            // this loop for rows/lines
        for(int k=0; k<=n-i; k++){    // this loop only for spaces
            printf("  ");
        }
        int first=1;
        for(int j=0; j<=i; j++){    // this is for printing integer number
            printf("%4d", first);   // %4 isliye likhe hai ki ek integer print karne ke liye 4 space lega isse mera code achha dikhega 
            first=first*(i-j)/(j+1);  // this for upgradationm acc to formula
        }
        printf("\n");
    }
    return 0;                                                                                                 
}