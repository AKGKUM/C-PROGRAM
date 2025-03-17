#include<stdio.h>
int main(){
    int n;
    printf(" enter n=");
    scanf("%d", &n);
    for(int i=0; i<=n; i++){
        int first=1;
        for(int space=0; space<=n-i; space++){
            printf("  ");
        }
        for(int j=0; j<=i; j++){
            printf("%4d", first);
            first=first*(i-j);
        }
        printf("\n");
    }
     
       return 0;

}