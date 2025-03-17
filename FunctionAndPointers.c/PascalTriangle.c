#include<stdio.h>
int factorial(int x){            // THIS FUNCTION IS FOR FACTORIAL CALCULATION
    int fact=1;
    for(int i=2; i<=x; i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int n, int r){
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main(){
    int anynumber;          // this is for how many lines you want 
    printf(" enetr anynumber=");
    scanf("%d", &anynumber);
    for(int i=0; i<=anynumber; i++){
        for(int space=0; space<=anynumber-i; space++){
            printf("  ");
        }
            for(int j=0; j<=i; j++){
            int icj= combination(i,j);
            printf("%4d", icj);
        }
        printf("\n");
    }

    return 0;


}