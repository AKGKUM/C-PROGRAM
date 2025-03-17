#include<stdio.h>
int main(){
    int n;
    printf(" enter no. of rows =");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        int a=1;
        for(int j=1; j<=i; j++){
            int d=64+a;
            char ch=(char)d;
            if( i%2!=0){
                printf("%d ", j);
                
            }
            
            else{
                printf("%c ", d);
            }
            a++;
        }
                printf("\n");
    }
    return 0;

}