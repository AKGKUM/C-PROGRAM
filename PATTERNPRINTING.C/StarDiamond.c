#include<stdio.h>
int main()
{
    int n;
    printf(" enter no. of lines =");
    scanf("%d", &n);
    int nsp=n/2;  // no of spaces
    int nst=1;    // no of star
    int middleline=n/2+1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp; j++){
            printf(" ");
        }
        for(int k=1; k<=nst; k++){
            printf("*");
        }
        if(i<middleline){
        nsp--;
        nst = nst+2;
        }
        else {
        nsp++;
        nst=nst-2;
        }
        printf("\n");
    }
    return 0;
}