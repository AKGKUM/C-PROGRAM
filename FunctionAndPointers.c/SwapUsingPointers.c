#include<stdio.h>
void swap(int* x, int* y){
    int temp;
    temp=*x;  // temp=2;  *x bhi x addres me store value ko batata hai
    *x=*y;    //a=9;   ye jo *yx hai--> ye y ke address me jo value stored hai usko batata hai 
    *y=temp;  // b=2
    return;
}
int main(){
    int a,b;
    printf(" enetr the value os a and b=");
    scanf("%d %d", &a, &b);
    swap(&a,&b);   // ye hal calling ke liye ye swap fuction ko call karega
    printf(" the value of a is=%d\n", a);
    printf(" the value of b is=%d", b);
    return 0;

}