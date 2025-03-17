#include<stdio.h>
int maze(int n, int m){
    int rightways = 0;
    int downways = 0;
    if(n==1 && m==1) return 1;
     if(n>1 && m>1){
        rightways = maze(n, m-1);
        downways =  maze(n-1, m);
    }
     if(n==1){// cannot go downways
        rightways = maze(n, m-1);
}
     if(m==1){  // cannot go rightways
        downways = maze(n-1, m);
    }
   
     int totalways = rightways + downways;
     return totalways;
}

int main(){
    int n;
    printf(" enetr no. of rows =");
    scanf("%d", &n);
    int m;
    printf(" enter no. of column =");
    scanf(" %d", &m);
    int noofways = maze(n,m);
    printf("%d", noofways);
    return 0;
}