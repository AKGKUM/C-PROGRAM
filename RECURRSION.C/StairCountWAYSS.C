
// ye code sirf single, double and  tripple step wala code ke liye hai. 

#include<stdio.h>
int stair(int n){            
if(n==1 || n==2 ) return n;
if(n==3) return n+1; 
int totalways = stair(n-1) + stair(n-2)+stair(n-3);
return totalways;
}
int main(){
    int n;
    printf(" enetr your number =");
    scanf("%d", &n);
    int ways = stair(n);
    printf(" only %d ways to reach at top of stair", ways);
    return 0;
}
