// ye code sirf single and double step ke liye hai, tripple step wala code alag next likhe hai 

#include<stdio.h>
int stair(int n){            
if(n==1 || n==2) return n;       // base case hai
int totalways = stair(n-1) + stair(n-2);
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