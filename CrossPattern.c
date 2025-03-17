#include<stdio.h>
int main(){
    int n;
    printf(" enter no. of rows =");
    scanf("%d", &n);
         for( int i=1; i<=n; i++){          // +no . of rows= no. of column ke , to yahan pr ek hi input se kam ho jayega
        for(int j=1; j<=n; j++){
            if( i==j || i+j==n+1){    // n+1 ye condition hai jo hmne build kara hai, second cross star ko print karne ke lie 
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}