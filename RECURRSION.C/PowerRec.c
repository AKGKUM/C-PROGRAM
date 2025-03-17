#include<stdio.h>
int power(int a, int b){
    if(b==0) return 1;
    else{
        return a*power(a, b-1);
    }
}

int main(){
    int a,b;
    printf(" enter your base=");
    scanf(" %d", &a);
    printf(" enter your power=");
    scanf(" %d", &b);
    int p = power(a,b);
    printf("%d  raised to the power %d is = %d", a , b, p);

    return 0;
}