#include<stdio.h>
int main()
{
    int ci, si;
    printf(" enter cost price :");
    scanf("%d", &ci);
    printf(" enter selling price :");
    scanf("%d", &si);
    int p, l;
    p = si - ci;
    l = ci - si;
    if(si>ci){
        printf(" profit = %d", p);
    }
    if(ci>si){
        printf("loss = %d", l);
    }
    if(ci==si){
        printf(" no profit, no loss");
    }
    return 0;
}