#include<stdio.h>
void greet(){                       // is pura function ka name hi greet hai
    printf("Good Morning\n");
    printf("How are You\n");
    return;
}
int main(){
    greet(); // this is for calling the function
    greet();    // yahan pe 3 baar greet likha gya hai iska matlab upper wala kam tin bar hoga 
    greet();
    return 0;
}