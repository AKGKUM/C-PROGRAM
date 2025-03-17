#include<stdio.h>
int main(){
    int n;
    printf(" enter no. of lines =");
    scanf("%d", &n);
    int minimum=0;
    for(int i=1; i<=2*n-1; i++){
        for(int j=1; j<=2*n-1; j++){
           int a=i;
           if(a>n) a=2*n-i;
           int b=j;
           if(b>n) b=2*n-j;
           if(a<b) minimum=a;
           else minimum=b;
       
            printf("%d",n+1- minimum);
        }
        printf("\n");
    }
    return 0;
}